#include "MonsterInGroupLightInformations.h"

void MonsterInGroupLightInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MonsterInGroupLightInformations(input);
}

void MonsterInGroupLightInformations::deserializeAs_MonsterInGroupLightInformations(ICustomDataInput &input) {
    this->_genericIdFunc(input);
    this->_gradeFunc(input);
    this->_levelFunc(input);
}

void MonsterInGroupLightInformations::_genericIdFunc(ICustomDataInput &input) {
    this->genericId = input.readInt();
}

void MonsterInGroupLightInformations::_gradeFunc(ICustomDataInput &input) {
    this->grade = input.readByte();

}

void MonsterInGroupLightInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readShort();

}

