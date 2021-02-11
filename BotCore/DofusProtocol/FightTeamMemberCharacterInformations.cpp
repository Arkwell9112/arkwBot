#include "FightTeamMemberCharacterInformations.h"

void FightTeamMemberCharacterInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTeamMemberCharacterInformations(input);
}

void FightTeamMemberCharacterInformations::deserializeAs_FightTeamMemberCharacterInformations(ICustomDataInput &input) {
    FightTeamMemberInformations::deserialize(input);
    this->_nameFunc(input);
    this->_levelFunc(input);
}

void FightTeamMemberCharacterInformations::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void FightTeamMemberCharacterInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

