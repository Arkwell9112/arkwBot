#include "FightTeamMemberWithAllianceCharacterInformations.h"

void FightTeamMemberWithAllianceCharacterInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTeamMemberWithAllianceCharacterInformations(input);
}

void FightTeamMemberWithAllianceCharacterInformations::deserializeAs_FightTeamMemberWithAllianceCharacterInformations(
        ICustomDataInput &input) {
    FightTeamMemberCharacterInformations::deserialize(input);
    this->allianceInfos.deserialize(input);
}

