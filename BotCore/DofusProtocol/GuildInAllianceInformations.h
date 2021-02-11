#ifndef GUILDINALLIANCEINFORMATIONS
#define GUILDINALLIANCEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GuildInformations.h"
#include "AllianceInformations.h"

class GuildInAllianceInformations : public GuildInformations {
public:
    unsigned int nbMembers = 0;
    unsigned int joinDate = 0;
    unsigned int protocolId = 274;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInAllianceInformations(ICustomDataInput &input);

    void _nbMembersFunc(ICustomDataInput &input);

    void _joinDateFunc(ICustomDataInput &input);
};

#endif