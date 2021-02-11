#ifndef TELEPORTHAVENBAGREQUESTMESSAGE
#define TELEPORTHAVENBAGREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TeleportHavenBagRequestMessage : public NetworkInterface {
public:
    double guestId = 0;
    unsigned int protocolId = 4582;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportHavenBagRequestMessage(ICustomDataInput &input);

    void _guestIdFunc(ICustomDataInput &input);
};

#endif