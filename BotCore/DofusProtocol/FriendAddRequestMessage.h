#ifndef FRIENDADDREQUESTMESSAGE
#define FRIENDADDREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class FriendAddRequestMessage : public NetworkInterface {
public:
    std::string name;
    unsigned int protocolId = 2815;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendAddRequestMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif