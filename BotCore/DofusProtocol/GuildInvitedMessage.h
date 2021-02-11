#ifndef GUILDINVITEDMESSAGE
#define GUILDINVITEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>
#include "GuildInformations.h"
#include "BasicGuildInformations.h"

class GuildInvitedMessage : public NetworkInterface {
public:
    double recruterId = 0;
    std::string recruterName;
    BasicGuildInformations guildInfo;
    unsigned int protocolId = 3569;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInvitedMessage(ICustomDataInput &input);

    void _recruterIdFunc(ICustomDataInput &input);

    void _recruterNameFunc(ICustomDataInput &input);
};

#endif