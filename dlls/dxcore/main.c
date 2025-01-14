/*
 * Copyright 2008 James McDonnell
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 *
 */

#include "wine/debug.h"

#define COBJMACROS
#include "winbase.h"
#include "winuser.h"
#include "objbase.h"

#include "dxcore.h"

WINE_DEFAULT_DEBUG_CHANNEL(dxcore);

BOOL WINAPI DllMain(HINSTANCE inst, DWORD reason, void *reserved)
{
    TRACE("was called\n");
    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(inst);
            break;
    }

    return TRUE;
}

HRESULT __stdcall DXCoreCreateAdapterFactory(REFIID riid, void **ppvFactory)
{
    TRACE("riid %p, ppvFactory %p stub! \n", riid, ppvFactory);
    return ERROR_CALL_NOT_IMPLEMENTED;
}
