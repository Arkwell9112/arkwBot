#ifndef FRIENDSPOUSEJOINREQUESTMESSAGE
#define FRIENDSPOUSEJOINREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendSpouseJoinRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 5901;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendSpouseJoinRequestMessage(ICustomDataInput &input);
};

#endif