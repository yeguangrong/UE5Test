// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealFrontendMain.h"
#include "Mac/MacProgramDelegate.h"
#include "LaunchEngineLoop.h"

int main( int argc, char *argv[] )
{
	return [MacProgramDelegate mainWithArgc:argc argv:argv programMain:UnrealFrontendMain programExit:FEngineLoop::AppExit];
}
