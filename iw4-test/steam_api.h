#pragma comment(linker, "/export:GetHSteamPipe=steam_api.GetHSteamPipe")
#pragma comment(linker, "/export:GetHSteamUser=steam_api.GetHSteamUser")
#pragma comment(linker, "/export:SteamAPI_GetHSteamPipe=steam_api.SteamAPI_GetHSteamPipe")
#pragma comment(linker, "/export:SteamAPI_GetHSteamUser=steam_api.SteamAPI_GetHSteamUser")
#pragma comment(linker, "/export:SteamAPI_GetSteamInstallPath=steam_api.SteamAPI_GetSteamInstallPath")
#pragma comment(linker, "/export:SteamAPI_Init=steam_api.SteamAPI_Init")
#pragma comment(linker, "/export:SteamAPI_InitSafe=steam_api.SteamAPI_InitSafe")
#pragma comment(linker, "/export:SteamAPI_IsSteamRunning=steam_api.SteamAPI_IsSteamRunning")
#pragma comment(linker, "/export:SteamAPI_RegisterCallResult=steam_api.SteamAPI_RegisterCallResult")
#pragma comment(linker, "/export:SteamAPI_RegisterCallback=steam_api.SteamAPI_RegisterCallback")
#pragma comment(linker, "/export:SteamAPI_RestartAppIfNecessary=steam_api.SteamAPI_RestartAppIfNecessary")
#pragma comment(linker, "/export:SteamAPI_RunCallbacks=steam_api.SteamAPI_RunCallbacks")
#pragma comment(linker, "/export:SteamAPI_SetMiniDumpComment=steam_api.SteamAPI_SetMiniDumpComment")
#pragma comment(linker, "/export:SteamAPI_SetTryCatchCallbacks=steam_api.SteamAPI_SetTryCatchCallbacks")
#pragma comment(linker, "/export:SteamAPI_Shutdown=steam_api.SteamAPI_Shutdown")
#pragma comment(linker, "/export:SteamAPI_UnregisterCallResult=steam_api.SteamAPI_UnregisterCallResult")
#pragma comment(linker, "/export:SteamAPI_UnregisterCallback=steam_api.SteamAPI_UnregisterCallback")
#pragma comment(linker, "/export:SteamAPI_WriteMiniDump=steam_api.SteamAPI_WriteMiniDump")
#pragma comment(linker, "/export:SteamApps=steam_api.SteamApps")
#pragma comment(linker, "/export:SteamClient=steam_api.SteamClient")
#pragma comment(linker, "/export:SteamContentServer=steam_api.SteamContentServer")
#pragma comment(linker, "/export:SteamContentServerUtils=steam_api.SteamContentServerUtils")
#pragma comment(linker, "/export:SteamContentServer_Init=steam_api.SteamContentServer_Init")
#pragma comment(linker, "/export:SteamContentServer_RunCallbacks=steam_api.SteamContentServer_RunCallbacks")
#pragma comment(linker, "/export:SteamContentServer_Shutdown=steam_api.SteamContentServer_Shutdown")
#pragma comment(linker, "/export:SteamFriends=steam_api.SteamFriends") // Replaced lateron
#pragma comment(linker, "/export:SteamGameServer=steam_api.SteamGameServer")
#pragma comment(linker, "/export:SteamGameServerApps=steam_api.SteamGameServerApps")
#pragma comment(linker, "/export:SteamGameServerNetworking=steam_api.SteamGameServerNetworking")
#pragma comment(linker, "/export:SteamGameServerUtils=steam_api.SteamGameServerUtils")
#pragma comment(linker, "/export:SteamGameServer_BSecure=steam_api.SteamGameServer_BSecure")
#pragma comment(linker, "/export:SteamGameServer_GetHSteamPipe=steam_api.SteamGameServer_GetHSteamPipe")
#pragma comment(linker, "/export:SteamGameServer_GetHSteamUser=steam_api.SteamGameServer_GetHSteamUser")
#pragma comment(linker, "/export:SteamGameServer_GetIPCCallCount=steam_api.SteamGameServer_GetIPCCallCount")
#pragma comment(linker, "/export:SteamGameServer_GetSteamID=steam_api.SteamGameServer_GetSteamID")
#pragma comment(linker, "/export:SteamGameServer_Init=steam_api.SteamGameServer_Init")
#pragma comment(linker, "/export:SteamGameServer_InitSafe=steam_api.SteamGameServer_InitSafe")
#pragma comment(linker, "/export:SteamGameServer_RunCallbacks=steam_api.SteamGameServer_RunCallbacks")
#pragma comment(linker, "/export:SteamGameServer_Shutdown=steam_api.SteamGameServer_Shutdown")
#pragma comment(linker, "/export:SteamMasterServerUpdater=steam_api.SteamMasterServerUpdater")
#pragma comment(linker, "/export:SteamMatchmaking=steam_api.SteamMatchmaking")
#pragma comment(linker, "/export:SteamMatchmakingServers=steam_api.SteamMatchmakingServers")
#pragma comment(linker, "/export:SteamNetworking=steam_api.SteamNetworking")
#pragma comment(linker, "/export:SteamRemoteStorage=steam_api.SteamRemoteStorage")
#pragma comment(linker, "/export:SteamUser=steam_api.SteamUser")
#pragma comment(linker, "/export:SteamUserStats=steam_api.SteamUserStats")
#pragma comment(linker, "/export:SteamUtils=steam_api.SteamUtils")
#pragma comment(linker, "/export:Steam_GetHSteamUserCurrent=steam_api.Steam_GetHSteamUserCurrent")
#pragma comment(linker, "/export:Steam_RegisterInterfaceFuncs=steam_api.Steam_RegisterInterfaceFuncs")
//#pragma comment(linker, "/export:Steam_RunCallbacks=steam_api.Steam_RunCallbacks") // Replaced with nullfunc
#pragma comment(linker, "/export:g_pSteamClientGameServer=steam_api.g_pSteamClientGameServer")