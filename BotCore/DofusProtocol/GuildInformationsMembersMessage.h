#ifndef GUILDINFORMATIONSMEMBERSMESSAGE
#define GUILDINFORMATIONSMEMBERSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GuildInformations.h"
#include "GuildMember.h"

class GuildInformationsMembersMessage : public NetworkInterface {
public:
    std::vector<GuildMember> members;
    unsigned int protocolId = 7846;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInformationsMembersMessage(ICustomDataInput &input);

    void _membersFunc(ICustomDataInput &input);
};

#endif