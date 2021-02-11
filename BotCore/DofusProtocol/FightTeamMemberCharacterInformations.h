#ifndef FIGHTTEAMMEMBERCHARACTERINFORMATIONS
#define FIGHTTEAMMEMBERCHARACTERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "FightTeamMemberInformations.h"

class FightTeamMemberCharacterInformations : public FightTeamMemberInformations {
public:
    std::string name;
    unsigned int level = 0;
    unsigned int protocolId = 4605;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTeamMemberCharacterInformations(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);
};

#endif