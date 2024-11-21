// Copyright Epic Games, Inc. All Rights Reserved.

//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 4.0.1
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------


public class FDatasmithFacadeMesh : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal FDatasmithFacadeMesh(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(FDatasmithFacadeMesh obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~FDatasmithFacadeMesh() {
    Dispose(false);
  }

  public void Dispose() {
    Dispose(true);
    global::System.GC.SuppressFinalize(this);
  }

  protected virtual void Dispose(bool disposing) {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          DatasmithFacadeCSharpPINVOKE.delete_FDatasmithFacadeMesh(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public FDatasmithFacadeMesh() : this(DatasmithFacadeCSharpPINVOKE.new_FDatasmithFacadeMesh(), true) {
  }

  public void SetName(string InName) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetName(swigCPtr, InName);
  }

  public string GetName() {
    string ret = global::System.Runtime.InteropServices.Marshal.PtrToStringUni(DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetName(swigCPtr));
    return ret;
  }

  public void SetFacesCount(int NumFaces) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetFacesCount(swigCPtr, NumFaces);
  }

  public int GetFacesCount() {
    int ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetFacesCount(swigCPtr);
    return ret;
  }

  public void SetFace(int Index, int Vertex1, int Vertex2, int Vertex3, int MaterialId) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetFace__SWIG_0(swigCPtr, Index, Vertex1, Vertex2, Vertex3, MaterialId);
  }

  public void SetFace(int Index, int Vertex1, int Vertex2, int Vertex3) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetFace__SWIG_1(swigCPtr, Index, Vertex1, Vertex2, Vertex3);
  }

  public void GetFace(int Index, out int OutVertex1, out int OutVertex2, out int OutVertex3, out int OutMaterialId) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetFace(swigCPtr, Index, out OutVertex1, out OutVertex2, out OutVertex3, out OutMaterialId);
  }

  public void SetFaceSmoothingMask(int Index, uint SmoothingMask) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetFaceSmoothingMask(swigCPtr, Index, SmoothingMask);
  }

  public uint GetFaceSmoothingMask(int Index) {
    uint ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetFaceSmoothingMask(swigCPtr, Index);
    return ret;
  }

  public int GetMaterialsCount() {
    int ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetMaterialsCount(swigCPtr);
    return ret;
  }

  public bool IsMaterialIdUsed(int MaterialId) {
    bool ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_IsMaterialIdUsed(swigCPtr, MaterialId);
    return ret;
  }

  public void SetVerticesCount(int NumVerts) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetVerticesCount(swigCPtr, NumVerts);
  }

  public int GetVerticesCount() {
    int ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetVerticesCount(swigCPtr);
    return ret;
  }

  public void SetVertex(int Index, float X, float Y, float Z) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetVertex(swigCPtr, Index, X, Y, Z);
  }

  public void GetVertex(int Index, out float OutX, out float OutY, out float OutZ) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetVertex(swigCPtr, Index, out OutX, out OutY, out OutZ);
  }

  public void SetNormal(int Index, float X, float Y, float Z) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetNormal(swigCPtr, Index, X, Y, Z);
  }

  public void GetNormal(int Index, out float OutX, out float OutY, out float OutZ) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetNormal(swigCPtr, Index, out OutX, out OutY, out OutZ);
  }

  public void SetUVChannelsCount(int ChannelCount) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetUVChannelsCount(swigCPtr, ChannelCount);
  }

  public void AddUVChannel() {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_AddUVChannel(swigCPtr);
  }

  public void RemoveUVChannel() {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_RemoveUVChannel(swigCPtr);
  }

  public int GetUVChannelsCount() {
    int ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetUVChannelsCount(swigCPtr);
    return ret;
  }

  public void SetUVCount(int Channel, int NumVerts) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetUVCount(swigCPtr, Channel, NumVerts);
  }

  public int GetUVCount(int Channel) {
    int ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetUVCount(swigCPtr, Channel);
    return ret;
  }

  public void SetUV(int Channel, int Index, double U, double V) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetUV(swigCPtr, Channel, Index, U, V);
  }

  public uint GetHashForUVChannel(int Channel) {
    uint ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetHashForUVChannel(swigCPtr, Channel);
    return ret;
  }

  public void GetUV(int Channel, int Index, out double OutU, out double OutV) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetUV(swigCPtr, Channel, Index, out OutU, out OutV);
  }

  public void SetFaceUV(int Index, int Channel, int Vertex1, int Vertex2, int Vertex3) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetFaceUV(swigCPtr, Index, Channel, Vertex1, Vertex2, Vertex3);
  }

  public void GetFaceUV(int Index, int Channel, out int OutVertex1, out int OutVertex2, out int OutVertex3) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetFaceUV(swigCPtr, Index, Channel, out OutVertex1, out OutVertex2, out OutVertex3);
  }

  public int GetVertexColorCount() {
    int ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetVertexColorCount(swigCPtr);
    return ret;
  }

  public void SetVertexColor(int Index, byte R, byte G, byte B, byte A) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetVertexColor(swigCPtr, Index, R, G, B, A);
  }

  public void GetVertexColor(int Index, out byte OutR, byte OutG, out byte OutB, out byte OutA) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetVertexColor(swigCPtr, Index, out OutR, OutG, out OutB, out OutA);
  }

  public void SetLightmapSourceUVChannel(int Channel) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_SetLightmapSourceUVChannel(swigCPtr, Channel);
  }

  public int GetLightmapSourceUVChannel() {
    int ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetLightmapSourceUVChannel(swigCPtr);
    return ret;
  }

  public void AddLOD(FDatasmithFacadeMesh InLODMesh) {
    DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_AddLOD(swigCPtr, FDatasmithFacadeMesh.getCPtr(InLODMesh));
    if (DatasmithFacadeCSharpPINVOKE.SWIGPendingException.Pending) throw DatasmithFacadeCSharpPINVOKE.SWIGPendingException.Retrieve();
  }

  public int GetLODsCount() {
    int ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetLODsCount(swigCPtr);
    return ret;
  }

  public FDatasmithFacadeMesh GetLOD(int Index) {
	global::System.IntPtr objectPtr = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_GetLOD(swigCPtr, Index);
	if(objectPtr == global::System.IntPtr.Zero)
	{
		return null;
	}
	else
	{
		return new FDatasmithFacadeMesh(objectPtr, true);
	}
}

  public float ComputeArea() {
    float ret = DatasmithFacadeCSharpPINVOKE.FDatasmithFacadeMesh_ComputeArea(swigCPtr);
    return ret;
  }

}
