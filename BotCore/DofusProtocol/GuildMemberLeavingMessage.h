#ifndef GUILDMEMBERLEAVINGMESSAGE
#define GUILDMEMBERLEAVINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildMember.h"

class GuildMemberLeavingMessage : public NetworkInterface {
public:
    bool kicked = false;
    double memberId = 0;
    unsigned int protocolId = 8165;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildMemberLeavingMessage(ICustomDataInput &input);

    void _kickedFunc(ICustomDataInput &input);

    void _memberIdFunc(ICustomDataInput &input);
};

#endif