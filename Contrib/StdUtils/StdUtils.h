///////////////////////////////////////////////////////////////////////////////
// StdUtils plug-in for NSIS
// Copyright (C) 2004-2012 LoRd_MuldeR <MuldeR2@GMX.de>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// http://www.gnu.org/licenses/gpl-2.0.txt
///////////////////////////////////////////////////////////////////////////////

#ifndef __STDUTILS_H__
#define __STDUTILS_H__

#include <Windows.h>
#include "nsis\pluginapi.h"
#include "msvc_utils.h"

#define NSISFUNC(name) extern "C" void __declspec(dllexport) name(HWND hWndParent, int string_size, TCHAR* variables, stack_t** stacktop, extra_parameters* extra)

#define MAKESTR(VAR,LEN) \
	TCHAR *VAR = new TCHAR[LEN]; \
	memset(VAR, 0, sizeof(TCHAR) * LEN)

#define REGSITER_CALLBACK(INST) \
	if(!g_bCallbackRegistred) g_bCallbackRegistred = \
	(extra->RegisterPluginCallback((HMODULE)INST, PluginCallback) == 0)

#endif //__STDUTILS_H__
