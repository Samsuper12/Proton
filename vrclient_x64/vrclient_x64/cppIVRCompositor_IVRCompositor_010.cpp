#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRCompositor_IVRCompositor_010.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRCompositor_IVRCompositor_010
{
#ifdef __cplusplus
    virtual void SetTrackingSpace( uint32_t ) = 0;
    virtual uint32_t GetTrackingSpace(  ) = 0;
    virtual uint32_t WaitGetPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t GetLastPoses( TrackedDevicePose_t *, uint32_t, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual uint32_t Submit( uint32_t, const Texture_t *, const VRTextureBounds_t *, uint32_t ) = 0;
    virtual void ClearLastSubmittedFrame(  ) = 0;
    virtual void PostPresentHandoff(  ) = 0;
    virtual bool GetFrameTiming( Compositor_FrameTiming *, uint32_t ) = 0;
    virtual float GetFrameTimeRemaining(  ) = 0;
    virtual void FadeToColor( float, float, float, float, float, bool ) = 0;
    virtual void FadeGrid( float, bool ) = 0;
    virtual uint32_t SetSkyboxOverride( const Texture_t *, uint32_t ) = 0;
    virtual void ClearSkyboxOverride(  ) = 0;
    virtual void CompositorBringToFront(  ) = 0;
    virtual void CompositorGoToBack(  ) = 0;
    virtual void CompositorQuit(  ) = 0;
    virtual bool IsFullscreen(  ) = 0;
    virtual uint32_t GetCurrentSceneFocusProcess(  ) = 0;
    virtual uint32_t GetLastFrameRenderer(  ) = 0;
    virtual bool CanRenderScene(  ) = 0;
    virtual void ShowMirrorWindow(  ) = 0;
    virtual void HideMirrorWindow(  ) = 0;
    virtual bool IsMirrorWindowVisible(  ) = 0;
    virtual void CompositorDumpImages(  ) = 0;
#endif /* __cplusplus */
};

void cppIVRCompositor_IVRCompositor_010_SetTrackingSpace( struct cppIVRCompositor_IVRCompositor_010_SetTrackingSpace_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->SetTrackingSpace( params->eOrigin );
}

void cppIVRCompositor_IVRCompositor_010_GetTrackingSpace( struct cppIVRCompositor_IVRCompositor_010_GetTrackingSpace_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->GetTrackingSpace(  );
}

void cppIVRCompositor_IVRCompositor_010_WaitGetPoses( struct cppIVRCompositor_IVRCompositor_010_WaitGetPoses_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->WaitGetPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_010_GetLastPoses( struct cppIVRCompositor_IVRCompositor_010_GetLastPoses_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->GetLastPoses( params->pRenderPoseArray, params->unRenderPoseArrayCount, params->pGamePoseArray, params->unGamePoseArrayCount );
}

void cppIVRCompositor_IVRCompositor_010_Submit( struct cppIVRCompositor_IVRCompositor_010_Submit_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->Submit( params->eEye, params->pTexture, params->pBounds, params->nSubmitFlags );
}

void cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame( struct cppIVRCompositor_IVRCompositor_010_ClearLastSubmittedFrame_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->ClearLastSubmittedFrame(  );
}

void cppIVRCompositor_IVRCompositor_010_PostPresentHandoff( struct cppIVRCompositor_IVRCompositor_010_PostPresentHandoff_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->PostPresentHandoff(  );
}

void cppIVRCompositor_IVRCompositor_010_GetFrameTiming( struct cppIVRCompositor_IVRCompositor_010_GetFrameTiming_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    Compositor_FrameTiming lin_pTiming;
    if (params->pTiming)
        struct_Compositor_FrameTiming_0914_win_to_lin( params->pTiming, &lin_pTiming );
    params->_ret = iface->GetFrameTiming( params->pTiming ? &lin_pTiming : nullptr, params->unFramesAgo );
    if (params->pTiming)
        struct_Compositor_FrameTiming_0914_lin_to_win( &lin_pTiming, params->pTiming );
}

void cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining( struct cppIVRCompositor_IVRCompositor_010_GetFrameTimeRemaining_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->GetFrameTimeRemaining(  );
}

void cppIVRCompositor_IVRCompositor_010_FadeToColor( struct cppIVRCompositor_IVRCompositor_010_FadeToColor_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->FadeToColor( params->fSeconds, params->fRed, params->fGreen, params->fBlue, params->fAlpha, params->bBackground );
}

void cppIVRCompositor_IVRCompositor_010_FadeGrid( struct cppIVRCompositor_IVRCompositor_010_FadeGrid_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->FadeGrid( params->fSeconds, params->bFadeIn );
}

void cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride( struct cppIVRCompositor_IVRCompositor_010_SetSkyboxOverride_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->SetSkyboxOverride( params->pTextures, params->unTextureCount );
}

void cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride( struct cppIVRCompositor_IVRCompositor_010_ClearSkyboxOverride_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->ClearSkyboxOverride(  );
}

void cppIVRCompositor_IVRCompositor_010_CompositorBringToFront( struct cppIVRCompositor_IVRCompositor_010_CompositorBringToFront_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->CompositorBringToFront(  );
}

void cppIVRCompositor_IVRCompositor_010_CompositorGoToBack( struct cppIVRCompositor_IVRCompositor_010_CompositorGoToBack_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->CompositorGoToBack(  );
}

void cppIVRCompositor_IVRCompositor_010_CompositorQuit( struct cppIVRCompositor_IVRCompositor_010_CompositorQuit_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->CompositorQuit(  );
}

void cppIVRCompositor_IVRCompositor_010_IsFullscreen( struct cppIVRCompositor_IVRCompositor_010_IsFullscreen_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->IsFullscreen(  );
}

void cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess( struct cppIVRCompositor_IVRCompositor_010_GetCurrentSceneFocusProcess_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->GetCurrentSceneFocusProcess(  );
}

void cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer( struct cppIVRCompositor_IVRCompositor_010_GetLastFrameRenderer_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->GetLastFrameRenderer(  );
}

void cppIVRCompositor_IVRCompositor_010_CanRenderScene( struct cppIVRCompositor_IVRCompositor_010_CanRenderScene_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->CanRenderScene(  );
}

void cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow( struct cppIVRCompositor_IVRCompositor_010_ShowMirrorWindow_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->ShowMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_010_HideMirrorWindow( struct cppIVRCompositor_IVRCompositor_010_HideMirrorWindow_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->HideMirrorWindow(  );
}

void cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible( struct cppIVRCompositor_IVRCompositor_010_IsMirrorWindowVisible_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    params->_ret = iface->IsMirrorWindowVisible(  );
}

void cppIVRCompositor_IVRCompositor_010_CompositorDumpImages( struct cppIVRCompositor_IVRCompositor_010_CompositorDumpImages_params *params )
{
    struct cppIVRCompositor_IVRCompositor_010 *iface = (struct cppIVRCompositor_IVRCompositor_010 *)params->linux_side;
    iface->CompositorDumpImages(  );
}

#ifdef __cplusplus
}
#endif
