#ifndef TELEPORTTOBUDDYCLOSEMESSAGE
#define TELEPORTTOBUDDYCLOSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportToBuddyCloseMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    double buddyId = 0;
    unsigned int protocolId = 9085;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportToBuddyCloseMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);

    void _buddyIdFunc(ICustomDataInput &input);
};

#endif