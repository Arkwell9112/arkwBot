#ifndef TELEPORTHAVENBAGANSWERMESSAGE
#define TELEPORTHAVENBAGANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportHavenBagAnswerMessage : public NetworkInterface {
public:
    bool accept = false;
    unsigned int protocolId = 3367;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportHavenBagAnswerMessage(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif