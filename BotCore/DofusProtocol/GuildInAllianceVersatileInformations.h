#ifndef GUILDINALLIANCEVERSATILEINFORMATIONS
#define GUILDINALLIANCEVERSATILEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GuildVersatileInformations.h"
#include "AllianceVersatileInformations.h"

class GuildInAllianceVersatileInformations : public GuildVersatileInformations {
public:
    unsigned int allianceId = 0;
    unsigned int protocolId = 8832;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInAllianceVersatileInformations(ICustomDataInput &input);

    void _allianceIdFunc(ICustomDataInput &input);
};

#endif