#ifndef TELEPORTBUDDIESANSWERMESSAGE
#define TELEPORTBUDDIESANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportBuddiesAnswerMessage : public NetworkInterface {
public:
    bool accept = false;
    unsigned int protocolId = 9396;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportBuddiesAnswerMessage(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif