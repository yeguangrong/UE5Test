// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;

[SupportedPlatforms("Win64", "Mac")]
public abstract class DatasmithRhinoBaseTarget : TargetRules
{
	private string RhinoExporterPath = Path.Combine("$(EngineDir)", "Source", "Programs", "Enterprise", "Datasmith", "DatasmithRhinoExporter");
	private const string AutoGeneratedFileDisclaimer = "// Warning. This is an AUTO-GENERATED file used for automatic version management. Please add your changes to GeneratedAssemblyInfo.cs.template.";
	private Guid UniqueID = Guid.NewGuid();

	private string RhinoEnvVarName
	{
		get { return "RHINO" + GetVersion() + "_PATH"; }
	}

	public DatasmithRhinoBaseTarget(TargetInfo Target)
		: base(Target)
	{
		Type = TargetType.Program;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		SolutionDirectory = "Programs/Datasmith";
		bBuildInSolutionByDefault = false;

		string RhinoVersionString = GetVersion();
		string ProjectName = "DatasmithRhino" + RhinoVersionString;

		ExeBinariesSubFolder = Path.Combine("Rhino", RhinoVersionString);
		LaunchModuleName = ProjectName;

		bShouldCompileAsDLL = true;
		LinkType = TargetLinkType.Monolithic;

		bBuildDeveloperTools = false;
		bUseMallocProfiler = false;
		bBuildWithEditorOnlyData = true;
		bCompileAgainstEngine = false;
		bCompileAgainstCoreUObject = true;
		bCompileICU = false;
		bUsesSlate = false;

		bHasExports = true;
		bForceEnableExceptions = true;

		AddVersionUpdatePostSteps(Target);

		// Define post-build step
		// Since the Datasmith Rhino Exporter is a C# project, build in batch the release configuration of the Visual Studio C# project file.
		string ProjectFile = Path.Combine(RhinoExporterPath, ProjectName, ProjectName+".csproj");
		string CustomAssemblyInfoPath = GetCustomAssemblyInfoPath(Target);
		string CompilerCommand = Target.Platform == UnrealTargetPlatform.Win64 ? @"$(EngineDir)\Build\BatchFiles\MSBuild.bat" : "xbuild";
		string PlatformOS = Target.Platform == UnrealTargetPlatform.Win64 ? "Win64" : "Mac";
		string ErrorMsg = string.Format("Cannot build {0}: Environment variable {1} is not defined.", ProjectName, RhinoEnvVarName);
		string BuildCommand = "";

		// If the environment variable RHINO<version>_PATH is set we use it to find the Rhino SDK location, otherwise we look if the SDK is in the ThirdParty folder, if not we look for it in an eventual Rhino installation
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			BuildCommand = string.Format(@"{0} /t:Build /p:Configuration={1} /p:AssemblyInfo=""{2}"" /p:Platform_OS=""{3}"" {4}", CompilerCommand, Target.Configuration, CustomAssemblyInfoPath, PlatformOS, ProjectFile);

			PostBuildSteps.Add("setlocal enableextensions");
			PostBuildSteps.Add(string.Format(@"if not defined {0} (if exist ""{1}"" (set ""{0}={1}"") else if exist ""{2}"" (set ""{0}={2}"") else ((echo {3}) & (exit /b 1)))", RhinoEnvVarName, GetRhinoThirdPartyFolder(), GetRhinoInstallFolderWindows(), ErrorMsg));
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			BuildCommand = string.Format(@"{0} /t:Build /nologo /p:Configuration={1} /p:AssemblyInfo=""{2}"" /p:Platform_OS=""{3}"" /p:{4}=${4} {5}", CompilerCommand, Target.Configuration, CustomAssemblyInfoPath, PlatformOS, RhinoEnvVarName, ProjectFile);

			PostBuildSteps.Add(string.Format(@"if [ -z ${{{0}+x}} ]; then if [ -d ""{1}"" ]; then {0}=""{1}""; elif [ -d ""{2}"" ]; then {0}=""{2}""; else echo {3} & exit 1; fi; fi;", RhinoEnvVarName, GetRhinoThirdPartyFolder(), GetRhinoInstallFolderMac(), ErrorMsg));
		}

		if (Target.Configuration == UnrealTargetConfiguration.Development)
		{
			string CSharpDllPath = Path.Combine("$(EngineDir)", "Binaries", "$(TargetPlatform)", ExeBinariesSubFolder, string.Format("{0}.dll", ProjectName));
			AdditionalBuildProducts.Add(CSharpDllPath);

			if (Target.Platform == UnrealTargetPlatform.Mac)
			{
				AdditionalBuildProducts.Add(Path.Combine("$(EngineDir)", "Binaries", "$(TargetPlatform)", ExeBinariesSubFolder, string.Format("{0}.rhp", ProjectName)));
			}
		}

		PostBuildSteps.Add(string.Format(@"echo {0}", BuildCommand));
		PostBuildSteps.Add(BuildCommand);
	}

	private static string GetPropertiesPath()
	{
		return Path.Combine("$(EngineDir)", "Source", "Programs", "Enterprise", "Datasmith", "DatasmithRhinoExporter", "Properties");
	}

	private string GetCustomAssemblyInfoPath(TargetInfo Target)
	{
		return Path.Combine(GetPropertiesPath(), String.Format("AssemblyInfo_{0}.cs", UniqueID.ToString("D")));
	}

	private void AddVersionUpdatePostSteps(TargetInfo Target)
	{
		ReadOnlyBuildVersion BuildVersion = Target.Version;
		string VersionString = string.Format("{0}.{1}.{2}", BuildVersion.MajorVersion, BuildVersion.MinorVersion, BuildVersion.PatchVersion);
		string CustomAssemblyInfoPath = GetCustomAssemblyInfoPath(Target);
		string CustomAssemblyTemplatePath = Path.Combine(GetPropertiesPath(), "GeneratedAssemblyInfo.cs.Template");

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			VersionUpdatePostStepsWindows(VersionString, CustomAssemblyInfoPath, CustomAssemblyTemplatePath);
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			VersionUpdatePostStepsMac(VersionString, CustomAssemblyInfoPath, CustomAssemblyTemplatePath);
		}
	}

	private void VersionUpdatePostStepsWindows(string VersionString, string CustomAssemblyInfoPath, string CustomAssemblyTemplatePath)
	{
		PostBuildSteps.Add(string.Format(@"echo Generating custom AssemblyInfo.cs with assembly version: {0}", VersionString));
		PostBuildSteps.Add(string.Format(@"echo ""copy /Y {0} {1}""", CustomAssemblyTemplatePath, CustomAssemblyInfoPath));
		PostBuildSteps.Add(string.Format(@"copy /Y ""{0}"" ""{1}""", CustomAssemblyTemplatePath, CustomAssemblyInfoPath));
		// Add a disclaimer on the auto-generated file.
		PostBuildSteps.Add(string.Format(@"powershell -Command ""(Get-Content -Path ""{0}"") -replace '<AutoGenerationDisclaimer>', '{1}' | Out-File -encoding UTF8 {0}""; exit", CustomAssemblyInfoPath, AutoGeneratedFileDisclaimer));
		// Update the assembly version of the plugin.
		PostBuildSteps.Add(string.Format(@"powershell -Command ""(Get-Content -Path ""{0}"") -replace '<AssemblyVersion>', '{1}' | Out-File -encoding UTF8 {0}""; exit", CustomAssemblyInfoPath, VersionString));
		PostBuildSteps.Add(string.Format(@"powershell -Command ""(Get-Content -Path ""{0}"") -replace '<AssemblyFileVersion>', '{1}' | Out-File -encoding UTF8 {0}""; exit", CustomAssemblyInfoPath, VersionString));
	}

	private void VersionUpdatePostStepsMac(string VersionString, string CustomAssemblyInfoPath, string CustomAssemblyTemplatePath)
	{
		PostBuildSteps.Add(string.Format(@"echo ""Generating custom AssemblyInfo.cs with assembly version: {0}""", VersionString));
		PostBuildSteps.Add(string.Format(@"echo ""cp {0} {1}""", CustomAssemblyTemplatePath, CustomAssemblyInfoPath));
		PostBuildSteps.Add(string.Format(@"cp ""{0}"" ""{1}""", CustomAssemblyTemplatePath, CustomAssemblyInfoPath));
		PostBuildSteps.Add(string.Format(@"chmod +w ""{0}""", CustomAssemblyInfoPath));
		// Add a disclaimer on the auto-generated file.
		string SanitizedDisclaimer = AutoGeneratedFileDisclaimer.Replace("/", "\\/");//.Replace(" ", "\\s");
		PostBuildSteps.Add(string.Format(@"sed -i '' 's/<AutoGenerationDisclaimer>/{1}/' ""{0}""", CustomAssemblyInfoPath, SanitizedDisclaimer));
		// Update the assembly version of the plugin.
		PostBuildSteps.Add(string.Format(@"sed -i '' 's/""<AssemblyVersion>""/""{1}""/' ""{0}""", CustomAssemblyInfoPath, VersionString));
		PostBuildSteps.Add(string.Format(@"sed -i '' 's/""<AssemblyFileVersion>""/""{1}""/' ""{0}""", CustomAssemblyInfoPath, VersionString));
	}

	public string GetRhinoThirdPartyFolder()
	{
		return Path.Combine("$(EngineDir)", "Restricted", "NotForLicensees", "Source", "ThirdParty", "Enterprise", "RhinoCommonSDK_" + GetVersion());
	}

	public abstract string GetVersion();

	public abstract string GetRhinoInstallFolderWindows();

	public abstract string GetRhinoInstallFolderMac();
}

public class DatasmithRhino6Target : DatasmithRhinoBaseTarget
{
	public DatasmithRhino6Target(TargetInfo Target)
		: base(Target)
	{
	}

	public override string GetVersion() { return "6"; }

	public override string GetRhinoInstallFolderWindows()
	{
		try
		{
			return Microsoft.Win32.Registry.GetValue(@"HKEY_LOCAL_MACHINE\SOFTWARE\McNeel\Rhinoceros\6.0\Install", "Path", "") as string;
		}
		catch(Exception)
		{
			return "";
		}
	}

	public override string GetRhinoInstallFolderMac()
	{
		return "/Applications/Rhinoceros.app/Contents/Frameworks/RhCore.framework/Versions/Current/Resources/";
	}
}
