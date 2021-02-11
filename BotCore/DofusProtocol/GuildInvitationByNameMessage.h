#ifndef GUILDINVITATIONBYNAMEMESSAGE
#define GUILDINVITATIONBYNAMEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class GuildInvitationByNameMessage : public NetworkInterface {
public:
    std::string name;
    unsigned int protocolId = 5366;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInvitationByNameMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif