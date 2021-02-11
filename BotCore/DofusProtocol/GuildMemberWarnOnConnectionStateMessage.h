#ifndef GUILDMEMBERWARNONCONNECTIONSTATEMESSAGE
#define GUILDMEMBERWARNONCONNECTIONSTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildMember.h"

class GuildMemberWarnOnConnectionStateMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 4105;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildMemberWarnOnConnectionStateMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif