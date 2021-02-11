#include "FightTeamMemberInformations.h"

void FightTeamMemberInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTeamMemberInformations(input);
}

void FightTeamMemberInformations::deserializeAs_FightTeamMemberInformations(ICustomDataInput &input) {
    this->_idFunc(input);
}

void FightTeamMemberInformations::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

