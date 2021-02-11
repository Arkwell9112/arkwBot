#ifndef TELEPORTBUDDIESREQUESTEDMESSAGE
#define TELEPORTBUDDIESREQUESTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class TeleportBuddiesRequestedMessage : public NetworkInterface {
public:
    unsigned int dungeonId = 0;
    double inviterId = 0;
    std::vector<double> invalidBuddiesIds;
    unsigned int protocolId = 6542;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TeleportBuddiesRequestedMessage(ICustomDataInput &input);

    void _dungeonIdFunc(ICustomDataInput &input);

    void _inviterIdFunc(ICustomDataInput &input);

    void _invalidBuddiesIdsFunc(ICustomDataInput &input);
};

#endif