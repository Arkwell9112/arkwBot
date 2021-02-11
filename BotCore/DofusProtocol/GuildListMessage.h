#ifndef GUILDLISTMESSAGE
#define GUILDLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GuildInformations.h"

class GuildListMessage : public NetworkInterface {
public:
    std::vector<GuildInformations> guilds;
    unsigned int protocolId = 2333;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildListMessage(ICustomDataInput &input);

    void _guildsFunc(ICustomDataInput &input);
};

#endif