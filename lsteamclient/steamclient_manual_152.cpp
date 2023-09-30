#include "unix_private.h"

extern "C"
{
#define SDK_VERSION 1520
#include "steamclient_manual_common.h"
}

#include <unordered_map>

#include "cppISteamInput_SteamInput005.hpp"
#include "cppISteamController_SteamController008.hpp"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

static void (W_STDCALL *win_EnableActionEventCallbacks)( SteamInputActionEvent_t * );
static void lin_SteamInputActionEventCallbackPointer( SteamInputActionEvent_t *dat )
{
    if (win_EnableActionEventCallbacks) win_EnableActionEventCallbacks( dat );
}

void cppISteamInput_SteamInput005_EnableActionEventCallbacks( struct cppISteamInput_SteamInput005_EnableActionEventCallbacks_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    win_EnableActionEventCallbacks = params->pCallback;
    iface->EnableActionEventCallbacks( params->pCallback ? &lin_SteamInputActionEventCallbackPointer : NULL );
}

/***** convert and cache ISteamInput glyph paths *****/
static const size_t ESteamInputGlyphSize_count = 3;
static std::unordered_map<int /*EInputActionOrigin*/, char *> cached_input_glyphs;
static std::unordered_map<int /*EInputActionOrigin*/, char *> cached_input_glyphs_xbox;
static std::unordered_map<int /*flags*/, std::unordered_map<int /*EInputActionOrigin*/, char *> > cached_input_glyphs_svg;
static std::unordered_map<int /*flags*/, std::unordered_map<int /*EInputActionOrigin*/, char *> > cached_input_glyphs_png[ESteamInputGlyphSize_count];

const char *steamclient_isteaminput_getglyph_png(int origin, int size, int flags, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(size >= ESteamInputGlyphSize_count){
        ERR("invalid glyph size: %u\n", size);
        return NULL;
    }

    if(cached_input_glyphs_png[size][flags].find(origin) == cached_input_glyphs_png[size][flags].end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs_png[size][flags][origin] = dos_path;
    }

    return cached_input_glyphs_png[size][flags][origin];
}

const char *steamclient_isteaminput_getglyph_svg(int origin, int flags, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_input_glyphs_svg[flags].find(origin) == cached_input_glyphs_svg[flags].end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs_svg[flags][origin] = dos_path;
    }

    return cached_input_glyphs_svg[flags][origin];
}

const char *steamclient_isteaminput_getglyph(int origin, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_input_glyphs.find(origin) == cached_input_glyphs.end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs[origin] = dos_path;
    }

    return cached_input_glyphs[origin];
}

const char *steamclient_isteaminput_getglyph_xbox(int origin, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_input_glyphs_xbox.find(origin) == cached_input_glyphs_xbox.end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_input_glyphs_xbox[origin] = dos_path;
    }

    return cached_input_glyphs_xbox[origin];
}

void cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetGlyphPNGForActionOrigin( params->eOrigin, params->eSize, params->unFlags );
    params->_ret = steamclient_isteaminput_getglyph_png( params->eOrigin, params->eSize,
                                                        params->unFlags, params->_ret );
}

void cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin( struct cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetGlyphSVGForActionOrigin( params->eOrigin, params->unFlags );
    params->_ret = steamclient_isteaminput_getglyph_svg( params->eOrigin, params->unFlags, params->_ret );
}

void cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy( struct cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin_Legacy( params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph( params->eOrigin, params->_ret );
}

void cppISteamInput_SteamInput005_GetGlyphForXboxOrigin( struct cppISteamInput_SteamInput005_GetGlyphForXboxOrigin_params *params )
{
    struct u_ISteamInput_SteamInput005 *iface = (struct u_ISteamInput_SteamInput005 *)params->linux_side;
    params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph_xbox( params->eOrigin, params->_ret );
}

/***** convert and cache ISteamController glyph paths *****/
static std::unordered_map<int /*EControllerActionOrigin*/, char *> cached_controller_glyphs;

const char *steamclient_isteamcontroller_getglyph(int origin, const char *lin_path)
{
    if(!lin_path)
        return NULL;

    if(cached_controller_glyphs.find(origin) == cached_controller_glyphs.end()){
        char *dos_path = (char *)HeapAlloc(GetProcessHeap(), 0, PATH_MAX);

        steamclient_unix_path_to_dos_path(1, lin_path, dos_path, PATH_MAX, 0);

        cached_controller_glyphs[origin] = dos_path;
    }

    return cached_controller_glyphs[origin];
}

void cppISteamController_SteamController008_GetGlyphForActionOrigin( struct cppISteamController_SteamController008_GetGlyphForActionOrigin_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetGlyphForActionOrigin( params->eOrigin );
    params->_ret = steamclient_isteamcontroller_getglyph( params->eOrigin, params->_ret );
}

void cppISteamController_SteamController008_GetGlyphForXboxOrigin( struct cppISteamController_SteamController008_GetGlyphForXboxOrigin_params *params )
{
    struct u_ISteamController_SteamController008 *iface = (struct u_ISteamController_SteamController008 *)params->linux_side;
    params->_ret = iface->GetGlyphForXboxOrigin( params->eOrigin );
    params->_ret = steamclient_isteaminput_getglyph_xbox( params->eOrigin, params->_ret );
}
