#ifndef ARKWBOT_PACKETDISPATCHERINTERFACE_H
#define ARKWBOT_PACKETDISPATCHERINTERFACE_H

#include "../Packet.h"

class PacketDispatcherInterface {
public:
    virtual void dispatcherCallBack(Packet &packet) = 0;
};


#endif //ARKWBOT_PACKETDISPATCHERINTERFACE_H