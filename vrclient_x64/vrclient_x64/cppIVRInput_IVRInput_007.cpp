#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.9.16/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRInput_IVRInput_007.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRInput_IVRInput_007
{
#ifdef __cplusplus
    virtual uint32_t SetActionManifestPath( const char * ) = 0;
    virtual uint32_t GetActionSetHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetActionHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t GetInputSourceHandle( const char *, uint64_t * ) = 0;
    virtual uint32_t UpdateActionState( VRActiveActionSet_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetDigitalActionData( uint64_t, InputDigitalActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetAnalogActionData( uint64_t, InputAnalogActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionDataRelativeToNow( uint64_t, uint32_t, float, InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetPoseActionDataForNextFrame( uint64_t, uint32_t, InputPoseActionData_t *, uint32_t, uint64_t ) = 0;
    virtual uint32_t GetSkeletalActionData( uint64_t, InputSkeletalActionData_t *, uint32_t ) = 0;
    virtual uint32_t GetBoneCount( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetBoneHierarchy( uint64_t, int32_t *, uint32_t ) = 0;
    virtual uint32_t GetBoneName( uint64_t, int32_t, char *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalReferenceTransforms( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalTrackingLevel( uint64_t, uint32_t * ) = 0;
    virtual uint32_t GetSkeletalBoneData( uint64_t, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t GetSkeletalSummaryData( uint64_t, uint32_t, VRSkeletalSummaryData_t * ) = 0;
    virtual uint32_t GetSkeletalBoneDataCompressed( uint64_t, uint32_t, void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressSkeletalBoneData( const void *, uint32_t, uint32_t, VRBoneTransform_t *, uint32_t ) = 0;
    virtual uint32_t TriggerHapticVibrationAction( uint64_t, float, float, float, float, uint64_t ) = 0;
    virtual uint32_t GetActionOrigins( uint64_t, uint64_t, uint64_t *, uint32_t ) = 0;
    virtual uint32_t GetOriginLocalizedName( uint64_t, char *, uint32_t, int32_t ) = 0;
    virtual uint32_t GetOriginTrackedDeviceInfo( uint64_t, InputOriginInfo_t *, uint32_t ) = 0;
    virtual uint32_t GetActionBindingInfo( uint64_t, InputBindingInfo_t *, uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t ShowActionOrigins( uint64_t, uint64_t ) = 0;
    virtual uint32_t ShowBindingsForActionSet( VRActiveActionSet_t *, uint32_t, uint32_t, uint64_t ) = 0;
    virtual bool IsUsingLegacyInput(  ) = 0;
    virtual uint32_t OpenBindingUI( const char *, uint64_t, uint64_t, bool ) = 0;
#endif /* __cplusplus */
};

void cppIVRInput_IVRInput_007_SetActionManifestPath( struct cppIVRInput_IVRInput_007_SetActionManifestPath_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->SetActionManifestPath( params->pchActionManifestPath );
}

void cppIVRInput_IVRInput_007_GetActionSetHandle( struct cppIVRInput_IVRInput_007_GetActionSetHandle_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetActionSetHandle( params->pchActionSetName, params->pHandle );
}

void cppIVRInput_IVRInput_007_GetActionHandle( struct cppIVRInput_IVRInput_007_GetActionHandle_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetActionHandle( params->pchActionName, params->pHandle );
}

void cppIVRInput_IVRInput_007_GetInputSourceHandle( struct cppIVRInput_IVRInput_007_GetInputSourceHandle_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetInputSourceHandle( params->pchInputSourcePath, params->pHandle );
}

void cppIVRInput_IVRInput_007_UpdateActionState( struct cppIVRInput_IVRInput_007_UpdateActionState_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->UpdateActionState( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount );
}

void cppIVRInput_IVRInput_007_GetDigitalActionData( struct cppIVRInput_IVRInput_007_GetDigitalActionData_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    InputDigitalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputDigitalActionData_t_1916_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetDigitalActionData( params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData)
        struct_InputDigitalActionData_t_1916_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_007_GetAnalogActionData( struct cppIVRInput_IVRInput_007_GetAnalogActionData_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    InputAnalogActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputAnalogActionData_t_1916_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetAnalogActionData( params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData)
        struct_InputAnalogActionData_t_1916_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow( struct cppIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    InputPoseActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputPoseActionData_t_1916_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetPoseActionDataRelativeToNow( params->action, params->eOrigin, params->fPredictedSecondsFromNow, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData)
        struct_InputPoseActionData_t_1916_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_007_GetPoseActionDataForNextFrame( struct cppIVRInput_IVRInput_007_GetPoseActionDataForNextFrame_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    InputPoseActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputPoseActionData_t_1916_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetPoseActionDataForNextFrame( params->action, params->eOrigin, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize, params->ulRestrictToDevice );
    if (params->pActionData)
        struct_InputPoseActionData_t_1916_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_007_GetSkeletalActionData( struct cppIVRInput_IVRInput_007_GetSkeletalActionData_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    InputSkeletalActionData_t lin_pActionData;
    if (params->pActionData)
        struct_InputSkeletalActionData_t_1916_win_to_lin( params->pActionData, &lin_pActionData );
    uint32_t lin_unActionDataSize = params->unActionDataSize ? sizeof(lin_pActionData) : 0;
    params->_ret = iface->GetSkeletalActionData( params->action, params->pActionData ? &lin_pActionData : nullptr, lin_unActionDataSize );
    if (params->pActionData)
        struct_InputSkeletalActionData_t_1916_lin_to_win( &lin_pActionData, params->pActionData, params->unActionDataSize );
}

void cppIVRInput_IVRInput_007_GetBoneCount( struct cppIVRInput_IVRInput_007_GetBoneCount_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetBoneCount( params->action, params->pBoneCount );
}

void cppIVRInput_IVRInput_007_GetBoneHierarchy( struct cppIVRInput_IVRInput_007_GetBoneHierarchy_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetBoneHierarchy( params->action, params->pParentIndices, params->unIndexArayCount );
}

void cppIVRInput_IVRInput_007_GetBoneName( struct cppIVRInput_IVRInput_007_GetBoneName_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetBoneName( params->action, params->nBoneIndex, params->pchBoneName, params->unNameBufferSize );
}

void cppIVRInput_IVRInput_007_GetSkeletalReferenceTransforms( struct cppIVRInput_IVRInput_007_GetSkeletalReferenceTransforms_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetSkeletalReferenceTransforms( params->action, params->eTransformSpace, params->eReferencePose, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_007_GetSkeletalTrackingLevel( struct cppIVRInput_IVRInput_007_GetSkeletalTrackingLevel_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetSkeletalTrackingLevel( params->action, params->pSkeletalTrackingLevel );
}

void cppIVRInput_IVRInput_007_GetSkeletalBoneData( struct cppIVRInput_IVRInput_007_GetSkeletalBoneData_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetSkeletalBoneData( params->action, params->eTransformSpace, params->eMotionRange, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_007_GetSkeletalSummaryData( struct cppIVRInput_IVRInput_007_GetSkeletalSummaryData_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetSkeletalSummaryData( params->action, params->eSummaryType, params->pSkeletalSummaryData );
}

void cppIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed( struct cppIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetSkeletalBoneDataCompressed( params->action, params->eMotionRange, params->pvCompressedData, params->unCompressedSize, params->punRequiredCompressedSize );
}

void cppIVRInput_IVRInput_007_DecompressSkeletalBoneData( struct cppIVRInput_IVRInput_007_DecompressSkeletalBoneData_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->DecompressSkeletalBoneData( params->pvCompressedBuffer, params->unCompressedBufferSize, params->eTransformSpace, params->pTransformArray, params->unTransformArrayCount );
}

void cppIVRInput_IVRInput_007_TriggerHapticVibrationAction( struct cppIVRInput_IVRInput_007_TriggerHapticVibrationAction_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->TriggerHapticVibrationAction( params->action, params->fStartSecondsFromNow, params->fDurationSeconds, params->fFrequency, params->fAmplitude, params->ulRestrictToDevice );
}

void cppIVRInput_IVRInput_007_GetActionOrigins( struct cppIVRInput_IVRInput_007_GetActionOrigins_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetActionOrigins( params->actionSetHandle, params->digitalActionHandle, params->originsOut, params->originOutCount );
}

void cppIVRInput_IVRInput_007_GetOriginLocalizedName( struct cppIVRInput_IVRInput_007_GetOriginLocalizedName_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetOriginLocalizedName( params->origin, params->pchNameArray, params->unNameArraySize, params->unStringSectionsToInclude );
}

void cppIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo( struct cppIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    uint32_t lin_unOriginInfoSize = std::min( params->unOriginInfoSize, (uint32_t)sizeof(vr::InputOriginInfo_t) );
    params->_ret = iface->GetOriginTrackedDeviceInfo( params->origin, params->pOriginInfo, lin_unOriginInfoSize );
}

void cppIVRInput_IVRInput_007_GetActionBindingInfo( struct cppIVRInput_IVRInput_007_GetActionBindingInfo_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->GetActionBindingInfo( params->action, params->pOriginInfo, params->unBindingInfoSize, params->unBindingInfoCount, params->punReturnedBindingInfoCount );
}

void cppIVRInput_IVRInput_007_ShowActionOrigins( struct cppIVRInput_IVRInput_007_ShowActionOrigins_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->ShowActionOrigins( params->actionSetHandle, params->ulActionHandle );
}

void cppIVRInput_IVRInput_007_ShowBindingsForActionSet( struct cppIVRInput_IVRInput_007_ShowBindingsForActionSet_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->ShowBindingsForActionSet( params->pSets, params->unSizeOfVRSelectedActionSet_t, params->unSetCount, params->originToHighlight );
}

void cppIVRInput_IVRInput_007_IsUsingLegacyInput( struct cppIVRInput_IVRInput_007_IsUsingLegacyInput_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->IsUsingLegacyInput(  );
}

void cppIVRInput_IVRInput_007_OpenBindingUI( struct cppIVRInput_IVRInput_007_OpenBindingUI_params *params )
{
    struct cppIVRInput_IVRInput_007 *iface = (struct cppIVRInput_IVRInput_007 *)params->linux_side;
    params->_ret = iface->OpenBindingUI( params->pchAppKey, params->ulActionSetHandle, params->ulDeviceHandle, params->bShowOnDesktop );
}

#ifdef __cplusplus
}
#endif
