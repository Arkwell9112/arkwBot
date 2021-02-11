#ifndef GUILDMEMBERONLINESTATUSMESSAGE
#define GUILDMEMBERONLINESTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildMember.h"

class GuildMemberOnlineStatusMessage : public NetworkInterface {
public:
    double memberId = 0;
    bool online = false;
    unsigned int protocolId = 7501;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildMemberOnlineStatusMessage(ICustomDataInput &input);

    void _memberIdFunc(ICustomDataInput &input);

    void _onlineFunc(ICustomDataInput &input);
};

#endif