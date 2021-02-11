#ifndef FRIENDSGETLISTMESSAGE
#define FRIENDSGETLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendsGetListMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2335;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendsGetListMessage(ICustomDataInput &input);
};

#endif