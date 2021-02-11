#ifndef FIGHTTEAMINFORMATIONS
#define FIGHTTEAMINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "FightTeamMemberInformations.h"
#include "AbstractFightTeamInformations.h"

class FightTeamInformations : public AbstractFightTeamInformations {
public:
    std::vector<FightTeamMemberInformations> teamMembers;
    unsigned int protocolId = 6438;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTeamInformations(ICustomDataInput &input);

    void _teamMembersFunc(ICustomDataInput &input);
};

#endif