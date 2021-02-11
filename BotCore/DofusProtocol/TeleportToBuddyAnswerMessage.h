#ifndef TELEPORTTOBUDDYANSWERMESSAGE
#define TELEPORTTOBUDDYANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportToBuddyAnswerMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    double buddyId = 0;
    bool accept = false;
    unsigned int protocolId = 9663;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportToBuddyAnswerMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);

    void _buddyIdFunc(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif