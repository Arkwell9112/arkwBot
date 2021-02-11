#ifndef FIGHTTEAMLIGHTINFORMATIONS
#define FIGHTTEAMLIGHTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "FightTeamInformations.h"
#include "AbstractFightTeamInformations.h"
#include "GuildMember.h"

class FightTeamLightInformations : public AbstractFightTeamInformations {
public:
    unsigned int teamMembersCount = 0;
    unsigned int meanLevel = 0;
    bool hasFriend = false;
    bool hasGuildMember = false;
    bool hasAllianceMember = false;
    bool hasGroupMember = false;
    bool hasMyTaxCollector = false;
    unsigned int protocolId = 8492;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTeamLightInformations(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _teamMembersCountFunc(ICustomDataInput &input);

    void _meanLevelFunc(ICustomDataInput &input);
};

#endif