#ifndef GUILDVERSATILEINFORMATIONS
#define GUILDVERSATILEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuildVersatileInformations : public NetworkInterface {
public:
    unsigned int guildId = 0;
    double leaderId = 0;
    unsigned int guildLevel = 0;
    unsigned int nbMembers = 0;
    unsigned int protocolId = 1344;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildVersatileInformations(ICustomDataInput &input);

    void _guildIdFunc(ICustomDataInput &input);

    void _leaderIdFunc(ICustomDataInput &input);

    void _guildLevelFunc(ICustomDataInput &input);

    void _nbMembersFunc(ICustomDataInput &input);
};

#endif