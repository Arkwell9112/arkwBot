#ifndef FRIENDJOINREQUESTMESSAGE
#define FRIENDJOINREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class FriendJoinRequestMessage : public NetworkInterface {
public:
    std::string name;
    unsigned int protocolId = 4156;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendJoinRequestMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif