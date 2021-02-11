#ifndef ARKWBOT_MAIN_H
#define ARKWBOT_MAIN_H

#include <WinSock2.h>
#include <process.h>

typedef int (WSAAPI *SEND)(SOCKET s, char *buf, int len, int flags);

typedef int (WSAAPI *RECV)(SOCKET s, char *buf, int len, int flags);

bool WINAPI DllMain(HANDLE hinstDll, DWORD fdwReason, LPVOID lpReserved);

#endif //ARKWBOT_MAIN_H