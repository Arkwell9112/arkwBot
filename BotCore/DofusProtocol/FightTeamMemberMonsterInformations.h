#ifndef FIGHTTEAMMEMBERMONSTERINFORMATIONS
#define FIGHTTEAMMEMBERMONSTERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "FightTeamMemberInformations.h"

class FightTeamMemberMonsterInformations : public FightTeamMemberInformations {
public:
    int monsterId = 0;
    unsigned int grade = 0;
    unsigned int protocolId = 8154;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTeamMemberMonsterInformations(ICustomDataInput &input);

    void _monsterIdFunc(ICustomDataInput &input);

    void _gradeFunc(ICustomDataInput &input);
};

#endif