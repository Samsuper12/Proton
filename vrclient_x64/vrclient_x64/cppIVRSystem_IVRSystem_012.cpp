#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.3/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_012.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRSystem_IVRSystem_012
{
#ifdef __cplusplus
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t * ) = 0;
    virtual bool IsDisplayOnDesktop(  ) = 0;
    virtual bool SetDisplayVisibility( bool ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( uint32_t, uint32_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceActivityLevel( uint32_t ) = 0;
    virtual void ApplyTransform( TrackedDevicePose_t *, const TrackedDevicePose_t *, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetTrackedDeviceIndexForControllerRole( uint32_t ) = 0;
    virtual uint32_t GetControllerRoleForTrackedDeviceIndex( uint32_t ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( VREvent_t *, uint32_t ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, VREvent_t *, uint32_t, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, VRControllerState_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, VRControllerState_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
    virtual uint32_t PerformFirmwareUpdate( uint32_t ) = 0;
    virtual void AcknowledgeQuit_Exiting(  ) = 0;
    virtual void AcknowledgeQuit_UserPrompt(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_012_GetRecommendedRenderTargetSize_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_012_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_012_GetProjectionMatrix_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ, params->eProjType );
}

void cppIVRSystem_IVRSystem_012_GetProjectionRaw( struct cppIVRSystem_IVRSystem_012_GetProjectionRaw_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
}

void cppIVRSystem_IVRSystem_012_ComputeDistortion( struct cppIVRSystem_IVRSystem_012_ComputeDistortion_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    *params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV );
}

void cppIVRSystem_IVRSystem_012_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_012_GetEyeToHeadTransform_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
}

void cppIVRSystem_IVRSystem_012_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_012_GetTimeSinceLastVsync_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
}

void cppIVRSystem_IVRSystem_012_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_012_GetD3D9AdapterIndex_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetD3D9AdapterIndex(  );
}

void cppIVRSystem_IVRSystem_012_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_012_GetDXGIOutputInfo_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
}

void cppIVRSystem_IVRSystem_012_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_012_IsDisplayOnDesktop_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->IsDisplayOnDesktop(  );
}

void cppIVRSystem_IVRSystem_012_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_012_SetDisplayVisibility_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
}

void cppIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_012_GetDeviceToAbsoluteTrackingPose_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
}

void cppIVRSystem_IVRSystem_012_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_012_ResetSeatedZeroPose_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
}

void cppIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_012_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_012_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_012_GetSortedTrackedDeviceIndicesOfClass_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
}

void cppIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_012_GetTrackedDeviceActivityLevel_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
}

void cppIVRSystem_IVRSystem_012_ApplyTransform( struct cppIVRSystem_IVRSystem_012_ApplyTransform_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
}

void cppIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_012_GetTrackedDeviceIndexForControllerRole_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceIndexForControllerRole( params->unDeviceType );
}

void cppIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_012_GetControllerRoleForTrackedDeviceIndex_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetControllerRoleForTrackedDeviceIndex( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_012_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_012_GetTrackedDeviceClass_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceClass( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_012_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_012_IsTrackedDeviceConnected_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->IsTrackedDeviceConnected( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_012_GetBoolTrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_012_GetFloatTrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_012_GetInt32TrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_012_GetUint64TrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_012_GetMatrix34TrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_012_GetStringTrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_012_GetPropErrorNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetPropErrorNameFromEnum( params->error );
}

void cppIVRSystem_IVRSystem_012_PollNextEvent( struct cppIVRSystem_IVRSystem_012_PollNextEvent_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_103_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = iface->PollNextEvent( params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent );
    if (params->pEvent)
        struct_VREvent_t_103_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVRSystem_IVRSystem_012_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_012_PollNextEventWithPose_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_103_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent, params->pTrackedDevicePose );
    if (params->pEvent)
        struct_VREvent_t_103_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_012_GetEventTypeNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetEventTypeNameFromEnum( params->eType );
}

void cppIVRSystem_IVRSystem_012_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_012_GetHiddenAreaMesh_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye );
}

void cppIVRSystem_IVRSystem_012_GetControllerState( struct cppIVRSystem_IVRSystem_012_GetControllerState_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    VRControllerState_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_103_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr );
    if (params->pControllerState)
        struct_VRControllerState001_t_103_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_012_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_012_GetControllerStateWithPose_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    VRControllerState_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_103_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr, params->pTrackedDevicePose );
    if (params->pControllerState)
        struct_VRControllerState001_t_103_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_012_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_012_TriggerHapticPulse_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
}

void cppIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_012_GetButtonIdNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetButtonIdNameFromEnum( params->eButtonId );
}

void cppIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_012_GetControllerAxisTypeNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
}

void cppIVRSystem_IVRSystem_012_CaptureInputFocus( struct cppIVRSystem_IVRSystem_012_CaptureInputFocus_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->CaptureInputFocus(  );
}

void cppIVRSystem_IVRSystem_012_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_012_ReleaseInputFocus_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->ReleaseInputFocus(  );
}

void cppIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_012_IsInputFocusCapturedByAnotherProcess_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->IsInputFocusCapturedByAnotherProcess(  );
}

void cppIVRSystem_IVRSystem_012_DriverDebugRequest( struct cppIVRSystem_IVRSystem_012_DriverDebugRequest_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->DriverDebugRequest( params->unDeviceIndex, params->pchRequest, params->pchResponseBuffer, params->unResponseBufferSize );
}

void cppIVRSystem_IVRSystem_012_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_012_PerformFirmwareUpdate_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    params->_ret = iface->PerformFirmwareUpdate( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_012_AcknowledgeQuit_Exiting_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->AcknowledgeQuit_Exiting(  );
}

void cppIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_012_AcknowledgeQuit_UserPrompt_params *params )
{
    struct cppIVRSystem_IVRSystem_012 *iface = (struct cppIVRSystem_IVRSystem_012 *)params->linux_side;
    iface->AcknowledgeQuit_UserPrompt(  );
}

#ifdef __cplusplus
}
#endif
