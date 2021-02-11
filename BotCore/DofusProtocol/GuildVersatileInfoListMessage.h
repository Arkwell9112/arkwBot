#ifndef GUILDVERSATILEINFOLISTMESSAGE
#define GUILDVERSATILEINFOLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GuildVersatileInformations.h"

class GuildVersatileInfoListMessage : public NetworkInterface {
public:
    std::vector<GuildVersatileInformations> guilds;
    unsigned int protocolId = 4027;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildVersatileInfoListMessage(ICustomDataInput &input);

    void _guildsFunc(ICustomDataInput &input);
};

#endif