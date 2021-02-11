#ifndef TELEPORTONSAMEMAPMESSAGE
#define TELEPORTONSAMEMAPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportOnSameMapMessage : public NetworkInterface {
public:
    double targetId = 0;
    unsigned int cellId = 0;
    unsigned int protocolId = 9981;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportOnSameMapMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif