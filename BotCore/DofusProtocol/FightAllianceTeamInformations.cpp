#include "FightAllianceTeamInformations.h"

void FightAllianceTeamInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightAllianceTeamInformations(input);
}

void FightAllianceTeamInformations::deserializeAs_FightAllianceTeamInformations(ICustomDataInput &input) {
    FightTeamInformations::deserialize(input);
    this->_relationFunc(input);
}

void FightAllianceTeamInformations::_relationFunc(ICustomDataInput &input) {
    this->relation = input.readByte();

}

