#ifndef GUILDJOINEDMESSAGE
#define GUILDJOINEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GuildInformations.h"

class GuildJoinedMessage : public NetworkInterface {
public:
    GuildInformations guildInfo;
    unsigned int memberRights = 0;
    unsigned int protocolId = 771;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildJoinedMessage(ICustomDataInput &input);

    void _memberRightsFunc(ICustomDataInput &input);
};

#endif