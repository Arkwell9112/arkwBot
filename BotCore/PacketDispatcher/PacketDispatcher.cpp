#include "PacketDispatcher.h"

PacketDispatcher PacketDispatcher::singleton = PacketDispatcher();

PacketDispatcher &PacketDispatcher::getInstance() {
    return singleton;
}

void PacketDispatcher::addListener(PacketDispatcherInterface &listener) {
    PacketDispatcherInterface *ptrlistener = &listener;
    bool found = false;
    auto it = list.begin();
    while (it != list.end()) {
        if ((*it) == ptrlistener) {
            found = true;
            break;
        }
        it++;
    }
    if (!found) {
        list.push_back(ptrlistener);
    }
}

void PacketDispatcher::removeListener(PacketDispatcherInterface &listener) {
    PacketDispatcherInterface *ptrlistener = &listener;
    auto it = list.begin();
    while (it != list.end()) {
        if ((*it) == ptrlistener) {
            list.erase(it);
            break;
        }
        it++;
    }
}

void PacketDispatcher::dispatchPacket(Packet &packet) {
    auto it = list.begin();
    while (it != list.end()) {
        (*it)->dispatcherCallBack(packet);
        it++;
    }
}