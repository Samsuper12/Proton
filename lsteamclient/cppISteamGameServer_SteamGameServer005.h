/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamGameServer_SteamGameServer005_LogOn_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer005_LogOn( struct cppISteamGameServer_SteamGameServer005_LogOn_params *params );

struct cppISteamGameServer_SteamGameServer005_LogOff_params
{
    void *linux_side;
};
extern void cppISteamGameServer_SteamGameServer005_LogOff( struct cppISteamGameServer_SteamGameServer005_LogOff_params *params );

struct cppISteamGameServer_SteamGameServer005_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer005_BLoggedOn( struct cppISteamGameServer_SteamGameServer005_BLoggedOn_params *params );

struct cppISteamGameServer_SteamGameServer005_BSecure_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamGameServer_SteamGameServer005_BSecure( struct cppISteamGameServer_SteamGameServer005_BSecure_params *params );

struct cppISteamGameServer_SteamGameServer005_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer005_GetSteamID( struct cppISteamGameServer_SteamGameServer005_GetSteamID_params *params );

struct cppISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate_params
{
    void *linux_side;
    bool _ret;
    uint32_t unIPClient;
    const void *pvAuthBlob;
    uint32_t cubAuthBlobSize;
    CSteamID *pSteamIDUser;
};
extern void cppISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate( struct cppISteamGameServer_SteamGameServer005_SendUserConnectAndAuthenticate_params *params );

struct cppISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection( struct cppISteamGameServer_SteamGameServer005_CreateUnauthenticatedUserConnection_params *params );

struct cppISteamGameServer_SteamGameServer005_SendUserDisconnect_params
{
    void *linux_side;
    CSteamID steamIDUser;
};
extern void cppISteamGameServer_SteamGameServer005_SendUserDisconnect( struct cppISteamGameServer_SteamGameServer005_SendUserDisconnect_params *params );

struct cppISteamGameServer_SteamGameServer005_BUpdateUserData_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchPlayerName;
    uint32_t uScore;
};
extern void cppISteamGameServer_SteamGameServer005_BUpdateUserData( struct cppISteamGameServer_SteamGameServer005_BUpdateUserData_params *params );

struct cppISteamGameServer_SteamGameServer005_BSetServerType_params
{
    void *linux_side;
    bool _ret;
    uint32_t unServerFlags;
    uint32_t unGameIP;
    uint16_t unGamePort;
    uint16_t unSpectatorPort;
    uint16_t usQueryPort;
    const char *pchGameDir;
    const char *pchVersion;
    bool bLANMode;
};
extern void cppISteamGameServer_SteamGameServer005_BSetServerType( struct cppISteamGameServer_SteamGameServer005_BSetServerType_params *params );

struct cppISteamGameServer_SteamGameServer005_UpdateServerStatus_params
{
    void *linux_side;
    int32_t cPlayers;
    int32_t cPlayersMax;
    int32_t cBotPlayers;
    const char *pchServerName;
    const char *pSpectatorServerName;
    const char *pchMapName;
};
extern void cppISteamGameServer_SteamGameServer005_UpdateServerStatus( struct cppISteamGameServer_SteamGameServer005_UpdateServerStatus_params *params );

struct cppISteamGameServer_SteamGameServer005_UpdateSpectatorPort_params
{
    void *linux_side;
    uint16_t unSpectatorPort;
};
extern void cppISteamGameServer_SteamGameServer005_UpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer005_UpdateSpectatorPort_params *params );

struct cppISteamGameServer_SteamGameServer005_SetGameType_params
{
    void *linux_side;
    const char *pchGameType;
};
extern void cppISteamGameServer_SteamGameServer005_SetGameType( struct cppISteamGameServer_SteamGameServer005_SetGameType_params *params );

struct cppISteamGameServer_SteamGameServer005_BGetUserAchievementStatus_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamID;
    const char *pchAchievementName;
};
extern void cppISteamGameServer_SteamGameServer005_BGetUserAchievementStatus( struct cppISteamGameServer_SteamGameServer005_BGetUserAchievementStatus_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
