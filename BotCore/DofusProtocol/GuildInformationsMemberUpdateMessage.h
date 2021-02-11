#ifndef GUILDINFORMATIONSMEMBERUPDATEMESSAGE
#define GUILDINFORMATIONSMEMBERUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildInformations.h"
#include "GuildMember.h"

class GuildInformationsMemberUpdateMessage : public NetworkInterface {
public:
    GuildMember member;
    unsigned int protocolId = 3797;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInformationsMemberUpdateMessage(ICustomDataInput &input);
};

#endif