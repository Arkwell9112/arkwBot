#ifndef GUILDMEMBERSHIPMESSAGE
#define GUILDMEMBERSHIPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GuildMember.h"
#include "GuildJoinedMessage.h"

class GuildMembershipMessage : public GuildJoinedMessage {
public:
    unsigned int protocolId = 4251;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildMembershipMessage(ICustomDataInput &input);
};

#endif