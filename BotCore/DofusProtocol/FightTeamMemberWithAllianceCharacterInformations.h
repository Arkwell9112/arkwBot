#ifndef FIGHTTEAMMEMBERWITHALLIANCECHARACTERINFORMATIONS
#define FIGHTTEAMMEMBERWITHALLIANCECHARACTERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "BasicAllianceInformations.h"
#include "AllianceInformations.h"
#include "FightTeamMemberCharacterInformations.h"

class FightTeamMemberWithAllianceCharacterInformations : public FightTeamMemberCharacterInformations {
public:
    BasicAllianceInformations allianceInfos;
    unsigned int protocolId = 9492;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTeamMemberWithAllianceCharacterInformations(ICustomDataInput &input);
};

#endif