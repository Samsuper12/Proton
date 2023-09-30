/* TODO these should be generated */
#ifndef __STEAMCLIENT_PRIVATE_H
#define __STEAMCLIENT_PRIVATE_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <windef.h>
#include <winbase.h>

#include "steamclient_structs.h"
#include "unixlib.h"

#include "wine/debug.h"
#include "wine/list.h"

#ifndef __cplusplus
#include "cxx.h"
#else
typedef void (*vtable_ptr)(void);
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define W_CDECL   __cdecl
#define W_STDCALL __stdcall
#define U_CDECL   __attribute__((sysv_abi))
#define U_STDCALL __attribute__((sysv_abi))

struct w_steam_iface
{
    vtable_ptr *vtable;
    void *u_iface;
};

struct SteamInputActionEvent_t;
typedef void (*CDECL win_SteamInputActionEventCallbackPointer)( struct SteamInputActionEvent_t * );
void lin_SteamInputActionEventCallbackPointer( struct SteamInputActionEvent_t *dat );

struct w_steam_iface *create_win_interface(const char *name, void *linux_side);
unsigned int steamclient_unix_path_to_dos_path( bool api_result, const char *src, char *dst,
                                                uint32_t dst_bytes, int is_url );

void *alloc_mem_for_iface(size_t size, const char *iface_version);
void *alloc_vtable(void *vtable, unsigned int method_count, const char *iface_version);

void *alloc_callback_wtou( int id, void *callback, int *callback_len );
void convert_callback_utow( int id, void *u_callback, int u_callback_len, void *w_callback, int w_callback_len );

#ifdef __cplusplus
}
#endif

#endif /* __STEAMCLIENT_PRIVATE_H */
