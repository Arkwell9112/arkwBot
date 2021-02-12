#include "Main.h"
#include "PacketProcessor.h"
#include "../Libs/MinHook/include/MinHook.h"
#include "ConfigManager.h"
#include "LockManager.h"
#include "../BotBase/CollecterFrame.h"
#include "LogManager.h"
#include <iostream>

SEND nsend = nullptr;
RECV nrecv = nullptr;

bool isFirst = true;

unsigned int getAddress(SOCKET s) {
    struct sockaddr addr{};
    int namelen = 16;
    getpeername(s, &addr, &namelen);
    unsigned int address = *reinterpret_cast<unsigned int *>(&addr.sa_data[2]);
    return address;
}

void printAddress(unsigned int address) {
    for (int i = 0; i < 4; i++) {
        unsigned int value = (address & (255 << (i * 8))) >> (i * 8);
        std::cout << value;
        if (i != 3) {
            std::cout << ".";
        } else {
            std::cout << std::endl;
        }
    }
}

int WSAAPI DetourSend(SOCKET s, char *buf, int len, int flags) {
    unsigned int address = getAddress(s);
    LockManager::getInstance().getLock().lock();
    if (ConfigManager::getInstance().isIpOK(address)) {
        PacketProcessor::getInstance().processPackets(address, true, buf, len);
    }

    if (ConfigManager::getInstance().isFindIpMode()) {
        printAddress(address);
    }
    LockManager::getInstance().getLock().unlock();
    return nsend(s, buf, len, flags);
}

int WSAAPI DetourRecv(SOCKET s, char *buf, int len, int flags) {
    int amount = nrecv(s, buf, len, flags);
    unsigned int address = getAddress(s);
    LockManager::getInstance().getLock().lock();
    if (ConfigManager::getInstance().isIpOK(address)) {
        PacketProcessor::getInstance().processPackets(address, false, buf, amount);
    }

    if (ConfigManager::getInstance().isFindIpMode()) {
        printAddress(address);
    }
    LockManager::getInstance().getLock().unlock();
    return amount;
}

bool WINAPI DllMain(HANDLE hinstDll, DWORD fdwReason, LPVOID lpReserved) {
    if (isFirst) {
        ConfigManager::getInstance().preInit();
        LogManager::getInstance().init();

        if (ConfigManager::getInstance().isConsole()) {
            AllocConsole();
            freopen("CONOUT$", "w", stdout);
        }

        LogManager::getInstance().log("Loading files... Please wait.", 0);

        ConfigManager::getInstance().init();

        LogManager::getInstance().log("Loading complete. System ready.", 0);

        if (MH_Initialize() != MH_OK) {
            return false;
        }

        if (MH_CreateHook(reinterpret_cast<LPVOID>(&send), reinterpret_cast<LPVOID>(&DetourSend),
                          reinterpret_cast<LPVOID *>(&nsend)) != MH_OK) {
            return false;
        }

        if (MH_CreateHook(reinterpret_cast<LPVOID>(&recv), reinterpret_cast<LPVOID>(&DetourRecv),
                          reinterpret_cast<LPVOID *>(&nrecv)) != MH_OK) {
            return false;
        }

        if (MH_EnableHook(MH_ALL_HOOKS) != MH_OK) {
            return false;
        }

        if (ConfigManager::getInstance().isExMode()) {
            CollecterFrame::getInstance().init();
        }

        isFirst = false;
        return true;
    } else {
        return true;
    }
}