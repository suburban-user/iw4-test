// ==========================================================
// IW4M project
// 
// Component: clientdll
// Sub-component: steam_api
// Purpose: Structured data handling.
//
// Initial author: NTAuthority
// Started: 2011-06-16
// ==========================================================

#include "stdafx.h"

// hooks
CallHook downloadStatsHook;
DWORD downloadStatsHookLoc = 0x4B229D;

StompHook writeStatsHook;
DWORD writeStatsHookLoc = 0x682E70;

char* statBuffer = (char*)0x1AD3690;

typedef void (__cdecl * LiveStorage_CompleteStatDownload_t)(int, int, int);
LiveStorage_CompleteStatDownload_t LiveStorage_CompleteStatDownload = (LiveStorage_CompleteStatDownload_t)0x4C04C0;

static unsigned int bufferSize;

extern int* clientState;

void LiveStorage_DownloadStats(const char* profileName)
{
	char* buffer;
	int size = FS_ReadFile("iw4m.stat", &buffer);
	if(size > 0)
	{
		Com_Printf(0, "[LiveStorage_DownloadStats] Successfully loaded stats.\n");
		
		memcpy(statBuffer, buffer, size);
		FS_FreeFile(buffer);
		
		if (*clientState < 3)
		{
			LiveStorage_CompleteStatDownload(0, 0, 0);
		}
	}
	else
	{
		Com_Printf(0, "[LiveStorage_DownloadStats] Failed loading stats, resetting...\n");
		// reset stats
		__asm
		{
			push esi
			mov eax, 60A5A0h
			mov esi, 0
			call eax
			pop esi
		}
	}
}

bool WriteStatsFunc(int remote, void* buffer)
{

	// check buffer size to be valid, though it doesn't matter if we don't do TEA
	if (bufferSize > 8192 || bufferSize & 3) return false; // & 3 is for 4-byte alignment

	// don't do writing for steam cloud
	if (remote)
		return true;

	// and write the file
	return FS_WriteFile("iw4m.stat", "players", buffer, bufferSize);
}

void __declspec(naked) WriteStatsHookStub()
{
	__asm
	{
		mov bufferSize, eax
		jmp WriteStatsFunc
	}
}

void Stats()
{
	downloadStatsHook.initialize(downloadStatsHookLoc, LiveStorage_DownloadStats);
	downloadStatsHook.installHook();

	writeStatsHook.initialize(writeStatsHookLoc, WriteStatsHookStub);
	writeStatsHook.installHook();

	// As we're not uploading stats, we can safely patch that
	//*(BYTE*)0x441D61 = 0xEB; // Probably not that though...
	*(BYTE*)0x441D7F = 0xEB;

	// same here
	*(WORD*)0x6830A7 = 0xE990;
}