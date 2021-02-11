#ifndef TELEPORTTOBUDDYOFFERMESSAGE
#define TELEPORTTOBUDDYOFFERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportToBuddyOfferMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    double buddyId = 0;
    unsigned int timeLeft = 0;
    unsigned int protocolId = 7023;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportToBuddyOfferMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);

    void _buddyIdFunc(ICustomDataInput &input);

    void _timeLeftFunc(ICustomDataInput &input);
};

#endif