#include "FightTeamMemberMonsterInformations.h"

void FightTeamMemberMonsterInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTeamMemberMonsterInformations(input);
}

void FightTeamMemberMonsterInformations::deserializeAs_FightTeamMemberMonsterInformations(ICustomDataInput &input) {
    FightTeamMemberInformations::deserialize(input);
    this->_monsterIdFunc(input);
    this->_gradeFunc(input);
}

void FightTeamMemberMonsterInformations::_monsterIdFunc(ICustomDataInput &input) {
    this->monsterId = input.readInt();
}

void FightTeamMemberMonsterInformations::_gradeFunc(ICustomDataInput &input) {
    this->grade = input.readByte();

}

