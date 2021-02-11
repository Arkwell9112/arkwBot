#ifndef FRIENDSPOUSEFOLLOWWITHCOMPASSREQUESTMESSAGE
#define FRIENDSPOUSEFOLLOWWITHCOMPASSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FriendSpouseFollowWithCompassRequestMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 5177;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendSpouseFollowWithCompassRequestMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif