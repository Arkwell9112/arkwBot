#ifndef GUILDMEMBERSETWARNONCONNECTIONMESSAGE
#define GUILDMEMBERSETWARNONCONNECTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildMember.h"

class GuildMemberSetWarnOnConnectionMessage : public NetworkInterface {
public:
    bool enable = false;
    unsigned int protocolId = 5160;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildMemberSetWarnOnConnectionMessage(ICustomDataInput &input);

    void _enableFunc(ICustomDataInput &input);
};

#endif