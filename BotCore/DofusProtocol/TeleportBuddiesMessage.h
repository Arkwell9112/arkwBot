#ifndef TELEPORTBUDDIESMESSAGE
#define TELEPORTBUDDIESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportBuddiesMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    unsigned int protocolId = 8372;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportBuddiesMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);
};

#endif