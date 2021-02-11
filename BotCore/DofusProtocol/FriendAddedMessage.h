#ifndef FRIENDADDEDMESSAGE
#define FRIENDADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "FriendInformations.h"

class FriendAddedMessage : public NetworkInterface {
public:
    FriendInformations friendAdded;
    unsigned int protocolId = 9160;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendAddedMessage(ICustomDataInput &input);
};

#endif