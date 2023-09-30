/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001.h"

struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001
{
#ifdef __cplusplus
    virtual uint64_t SendMethod( const char *, const void *, uint32_t, uint64_t ) = 0;
    virtual bool GetMethodResponseInfo( uint64_t, uint32_t *, uint32_t * ) = 0;
    virtual bool GetMethodResponseData( uint64_t, void *, uint32_t, bool ) = 0;
    virtual bool ReleaseMethod( uint64_t ) = 0;
    virtual bool SendNotification( const char *, const void *, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SendMethod( params->pchServiceMethod, params->pRequestBuffer, params->unRequestBufferSize, params->unContext );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetMethodResponseInfo( params->hHandle, params->punResponseSize, params->peResult );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->GetMethodResponseData( params->hHandle, params->pResponseBuffer, params->unResponseBufferSize, params->bAutoRelease );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->ReleaseMethod( params->hHandle );
}

void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification_params *params )
{
    struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *iface = (struct u_ISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001 *)params->linux_side;
    params->_ret = iface->SendNotification( params->pchServiceNotification, params->pNotificationBuffer, params->unNotificationBufferSize );
}

