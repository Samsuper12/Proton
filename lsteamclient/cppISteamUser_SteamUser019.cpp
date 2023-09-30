/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamUser_SteamUser019.h"

struct u_ISteamUser_SteamUser019
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetAvailableVoice( uint32_t *, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoice( bool, void *, uint32_t, uint32_t *, bool, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t DecompressVoice( const void *, uint32_t, void *, uint32_t, uint32_t *, uint32_t ) = 0;
    virtual uint32_t GetVoiceOptimalSampleRate(  ) = 0;
    virtual uint32_t GetAuthSessionTicket( void *, int32_t, uint32_t * ) = 0;
    virtual uint32_t BeginAuthSession( const void *, int32_t, CSteamID ) = 0;
    virtual void EndAuthSession( CSteamID ) = 0;
    virtual void CancelAuthTicket( uint32_t ) = 0;
    virtual uint32_t UserHasLicenseForApp( CSteamID, uint32_t ) = 0;
    virtual bool BIsBehindNAT(  ) = 0;
    virtual void AdvertiseGame( CSteamID, uint32_t, uint16_t ) = 0;
    virtual uint64_t RequestEncryptedAppTicket( void *, int32_t ) = 0;
    virtual bool GetEncryptedAppTicket( void *, int32_t, uint32_t * ) = 0;
    virtual int32_t GetGameBadgeLevel( int32_t, bool ) = 0;
    virtual int32_t GetPlayerSteamLevel(  ) = 0;
    virtual uint64_t RequestStoreAuthURL( const char * ) = 0;
    virtual bool BIsPhoneVerified(  ) = 0;
    virtual bool BIsTwoFactorEnabled(  ) = 0;
    virtual bool BIsPhoneIdentifying(  ) = 0;
    virtual bool BIsPhoneRequiringVerification(  ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser019_GetHSteamUser( struct cppISteamUser_SteamUser019_GetHSteamUser_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser019_BLoggedOn( struct cppISteamUser_SteamUser019_BLoggedOn_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser019_GetSteamID( struct cppISteamUser_SteamUser019_GetSteamID_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser019_InitiateGameConnection( struct cppISteamUser_SteamUser019_InitiateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser019_TerminateGameConnection( struct cppISteamUser_SteamUser019_TerminateGameConnection_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser019_TrackAppUsageEvent( struct cppISteamUser_SteamUser019_TrackAppUsageEvent_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser019_GetUserDataFolder( struct cppISteamUser_SteamUser019_GetUserDataFolder_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser019_StartVoiceRecording( struct cppISteamUser_SteamUser019_StartVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser019_StopVoiceRecording( struct cppISteamUser_SteamUser019_StopVoiceRecording_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser019_GetAvailableVoice( struct cppISteamUser_SteamUser019_GetAvailableVoice_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->GetAvailableVoice( params->pcbCompressed, params->pcbUncompressed_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser019_GetVoice( struct cppISteamUser_SteamUser019_GetVoice_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->GetVoice( params->bWantCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->bWantUncompressed_Deprecated, params->pUncompressedDestBuffer_Deprecated, params->cbUncompressedDestBufferSize_Deprecated, params->nUncompressBytesWritten_Deprecated, params->nUncompressedVoiceDesiredSampleRate_Deprecated );
}

void cppISteamUser_SteamUser019_DecompressVoice( struct cppISteamUser_SteamUser019_DecompressVoice_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten, params->nDesiredSampleRate );
}

void cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate( struct cppISteamUser_SteamUser019_GetVoiceOptimalSampleRate_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->GetVoiceOptimalSampleRate(  );
}

void cppISteamUser_SteamUser019_GetAuthSessionTicket( struct cppISteamUser_SteamUser019_GetAuthSessionTicket_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->GetAuthSessionTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser019_BeginAuthSession( struct cppISteamUser_SteamUser019_BeginAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->BeginAuthSession( params->pAuthTicket, params->cbAuthTicket, params->steamID );
}

void cppISteamUser_SteamUser019_EndAuthSession( struct cppISteamUser_SteamUser019_EndAuthSession_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    iface->EndAuthSession( params->steamID );
}

void cppISteamUser_SteamUser019_CancelAuthTicket( struct cppISteamUser_SteamUser019_CancelAuthTicket_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    iface->CancelAuthTicket( params->hAuthTicket );
}

void cppISteamUser_SteamUser019_UserHasLicenseForApp( struct cppISteamUser_SteamUser019_UserHasLicenseForApp_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->UserHasLicenseForApp( params->steamID, params->appID );
}

void cppISteamUser_SteamUser019_BIsBehindNAT( struct cppISteamUser_SteamUser019_BIsBehindNAT_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->BIsBehindNAT(  );
}

void cppISteamUser_SteamUser019_AdvertiseGame( struct cppISteamUser_SteamUser019_AdvertiseGame_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    iface->AdvertiseGame( params->steamIDGameServer, params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser019_RequestEncryptedAppTicket( struct cppISteamUser_SteamUser019_RequestEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->RequestEncryptedAppTicket( params->pDataToInclude, params->cbDataToInclude );
}

void cppISteamUser_SteamUser019_GetEncryptedAppTicket( struct cppISteamUser_SteamUser019_GetEncryptedAppTicket_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->GetEncryptedAppTicket( params->pTicket, params->cbMaxTicket, params->pcbTicket );
}

void cppISteamUser_SteamUser019_GetGameBadgeLevel( struct cppISteamUser_SteamUser019_GetGameBadgeLevel_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->GetGameBadgeLevel( params->nSeries, params->bFoil );
}

void cppISteamUser_SteamUser019_GetPlayerSteamLevel( struct cppISteamUser_SteamUser019_GetPlayerSteamLevel_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->GetPlayerSteamLevel(  );
}

void cppISteamUser_SteamUser019_RequestStoreAuthURL( struct cppISteamUser_SteamUser019_RequestStoreAuthURL_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->RequestStoreAuthURL( params->pchRedirectURL );
}

void cppISteamUser_SteamUser019_BIsPhoneVerified( struct cppISteamUser_SteamUser019_BIsPhoneVerified_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->BIsPhoneVerified(  );
}

void cppISteamUser_SteamUser019_BIsTwoFactorEnabled( struct cppISteamUser_SteamUser019_BIsTwoFactorEnabled_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->BIsTwoFactorEnabled(  );
}

void cppISteamUser_SteamUser019_BIsPhoneIdentifying( struct cppISteamUser_SteamUser019_BIsPhoneIdentifying_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->BIsPhoneIdentifying(  );
}

void cppISteamUser_SteamUser019_BIsPhoneRequiringVerification( struct cppISteamUser_SteamUser019_BIsPhoneRequiringVerification_params *params )
{
    struct u_ISteamUser_SteamUser019 *iface = (struct u_ISteamUser_SteamUser019 *)params->linux_side;
    params->_ret = iface->BIsPhoneRequiringVerification(  );
}

