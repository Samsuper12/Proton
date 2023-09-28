#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.8.19/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_021.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVROverlay_IVROverlay_021
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t GetOverlayKey( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetOverlayName( uint64_t, char *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayName( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayImageData( uint64_t, void *, uint32_t, uint32_t *, uint32_t * ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayRenderingPid( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayRenderingPid( uint64_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTexelAspect( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayTexelAspect( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlaySortOrder( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlaySortOrder( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayCurvature( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayCurvature( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayTextureColorSpace( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayTextureColorSpace( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTextureBounds( uint64_t, const VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayTextureBounds( uint64_t, VRTextureBounds_t * ) = 0;
    virtual uint32_t GetOverlayRenderModel( uint64_t, char *, uint32_t, HmdColor_t *, uint32_t * ) = 0;
    virtual uint32_t SetOverlayRenderModel( uint64_t, const char *, const HmdColor_t * ) = 0;
    virtual uint32_t GetOverlayTransformType( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayTransformAbsolute( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformAbsolute( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceRelative( uint64_t, uint32_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t, const char * ) = 0;
    virtual uint32_t GetOverlayTransformTrackedDeviceComponent( uint64_t, uint32_t *, char *, uint32_t ) = 0;
    virtual uint32_t GetOverlayTransformOverlayRelative( uint64_t, uint64_t *, HmdMatrix34_t * ) = 0;
    virtual uint32_t SetOverlayTransformOverlayRelative( uint64_t, uint64_t, const HmdMatrix34_t * ) = 0;
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, VREvent_t *, uint32_t ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool IsHoverTargetOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayDualAnalogTransform( uint64_t, uint32_t, const HmdVector2_t *, float ) = 0;
    virtual uint32_t GetOverlayDualAnalogTransform( uint64_t, uint32_t, HmdVector2_t *, float * ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, const Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, VRTextureBounds_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
    virtual uint32_t GetOverlayTextureSize( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t GetPrimaryDashboardDevice(  ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
    virtual void CloseMessageOverlay(  ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_021_FindOverlay( struct cppIVROverlay_IVROverlay_021_FindOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_CreateOverlay( struct cppIVROverlay_IVROverlay_021_CreateOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_DestroyOverlay( struct cppIVROverlay_IVROverlay_021_DestroyOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_GetOverlayKey( struct cppIVROverlay_IVROverlay_021_GetOverlayKey_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_021_GetOverlayName( struct cppIVROverlay_IVROverlay_021_GetOverlayName_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_021_SetOverlayName( struct cppIVROverlay_IVROverlay_021_SetOverlayName_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayName( params->ulOverlayHandle, params->pchName );
}

void cppIVROverlay_IVROverlay_021_GetOverlayImageData( struct cppIVROverlay_IVROverlay_021_GetOverlayImageData_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_021_GetOverlayErrorNameFromEnum_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_021_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_021_SetOverlayRenderingPid_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_021_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_021_GetOverlayRenderingPid_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_SetOverlayFlag( struct cppIVROverlay_IVROverlay_021_SetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_021_GetOverlayFlag( struct cppIVROverlay_IVROverlay_021_GetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_021_SetOverlayColor( struct cppIVROverlay_IVROverlay_021_SetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_021_GetOverlayColor( struct cppIVROverlay_IVROverlay_021_GetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_021_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_021_SetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_021_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_021_GetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_021_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_021_SetOverlayTexelAspect_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_021_GetOverlayTexelAspect_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
}

void cppIVROverlay_IVROverlay_021_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_021_SetOverlaySortOrder_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
}

void cppIVROverlay_IVROverlay_021_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_021_GetOverlaySortOrder_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
}

void cppIVROverlay_IVROverlay_021_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_021_SetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_021_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_021_GetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_021_SetOverlayCurvature( struct cppIVROverlay_IVROverlay_021_SetOverlayCurvature_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayCurvature( params->ulOverlayHandle, params->fCurvature );
}

void cppIVROverlay_IVROverlay_021_GetOverlayCurvature( struct cppIVROverlay_IVROverlay_021_GetOverlayCurvature_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayCurvature( params->ulOverlayHandle, params->pfCurvature );
}

void cppIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_021_SetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_021_GetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_021_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_021_SetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_021_GetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_021_GetOverlayRenderModel( struct cppIVROverlay_IVROverlay_021_GetOverlayRenderModel_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayRenderModel( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pColor, params->pError );
}

void cppIVROverlay_IVROverlay_021_SetOverlayRenderModel( struct cppIVROverlay_IVROverlay_021_SetOverlayRenderModel_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayRenderModel( params->ulOverlayHandle, params->pchRenderModel, params->pColor );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformType_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_021_SetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_021_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_021_GetOverlayTransformOverlayRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative( struct cppIVROverlay_IVROverlay_021_SetOverlayTransformOverlayRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformOverlayRelative( params->ulOverlayHandle, params->ulOverlayHandleParent, params->pmatParentOverlayToOverlayTransform );
}

void cppIVROverlay_IVROverlay_021_ShowOverlay( struct cppIVROverlay_IVROverlay_021_ShowOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_HideOverlay( struct cppIVROverlay_IVROverlay_021_HideOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_IsOverlayVisible( struct cppIVROverlay_IVROverlay_021_IsOverlayVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_021_GetTransformForOverlayCoordinates_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_021_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_021_PollNextOverlayEvent_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_1819_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent );
    if (params->pEvent)
        struct_VREvent_t_1819_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVROverlay_IVROverlay_021_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_021_GetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_021_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_021_SetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_021_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_021_GetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_021_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_021_SetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_021_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_021_ComputeOverlayIntersection_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_021_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_021_IsHoverTargetOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_021_SetOverlayDualAnalogTransform_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->pvCenter, params->fRadius );
}

void cppIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform( struct cppIVROverlay_IVROverlay_021_GetOverlayDualAnalogTransform_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayDualAnalogTransform( params->ulOverlay, params->eWhich, params->pvCenter, params->pfRadius );
}

void cppIVROverlay_IVROverlay_021_SetOverlayTexture( struct cppIVROverlay_IVROverlay_021_SetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_021_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_021_ClearOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_SetOverlayRaw( struct cppIVROverlay_IVROverlay_021_SetOverlayRaw_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_021_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_021_SetOverlayFromFile_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTexture( struct cppIVROverlay_IVROverlay_021_GetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
}

void cppIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_021_ReleaseNativeOverlayHandle_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_021_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_021_GetOverlayTextureSize_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_021_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_021_CreateDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_021_IsDashboardVisible( struct cppIVROverlay_IVROverlay_021_IsDashboardVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_021_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_021_IsActiveDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_021_SetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_021_GetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_021_ShowDashboard( struct cppIVROverlay_IVROverlay_021_ShowDashboard_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_021_GetPrimaryDashboardDevice_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_021_ShowKeyboard( struct cppIVROverlay_IVROverlay_021_ShowKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_021_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_021_ShowKeyboardForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_021_GetKeyboardText( struct cppIVROverlay_IVROverlay_021_GetKeyboardText_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_021_HideKeyboard( struct cppIVROverlay_IVROverlay_021_HideKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_021_SetKeyboardTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_021_SetKeyboardPositionForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

void cppIVROverlay_IVROverlay_021_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_021_SetOverlayIntersectionMask_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
}

void cppIVROverlay_IVROverlay_021_GetOverlayFlags( struct cppIVROverlay_IVROverlay_021_GetOverlayFlags_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
}

void cppIVROverlay_IVROverlay_021_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_021_ShowMessageOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    params->_ret = iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
}

void cppIVROverlay_IVROverlay_021_CloseMessageOverlay( struct cppIVROverlay_IVROverlay_021_CloseMessageOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_021 *iface = (struct cppIVROverlay_IVROverlay_021 *)params->linux_side;
    iface->CloseMessageOverlay(  );
}

#ifdef __cplusplus
}
#endif
