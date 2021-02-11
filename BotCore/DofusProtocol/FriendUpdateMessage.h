#ifndef FRIENDUPDATEMESSAGE
#define FRIENDUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "FriendInformations.h"

class FriendUpdateMessage : public NetworkInterface {
public:
    FriendInformations friendUpdated;
    unsigned int protocolId = 6690;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendUpdateMessage(ICustomDataInput &input);
};

#endif