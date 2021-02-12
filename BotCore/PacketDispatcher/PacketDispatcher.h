#ifndef ARKWBOT_PACKETDISPATCHER_H
#define ARKWBOT_PACKETDISPATCHER_H

#include "PacketDispatcherInterface.h"
#include <list>

class PacketDispatcher {
public:
    static PacketDispatcher &getInstance();

    void addListener(PacketDispatcherInterface &listener);

    void removeListener(PacketDispatcherInterface &listener);

    void dispatchPacket(Packet &packet);

private:
    PacketDispatcher() : list() {};

    static PacketDispatcher singleton;

    std::list<PacketDispatcherInterface *> list;
};


#endif //ARKWBOT_PACKETDISPATCHER_H