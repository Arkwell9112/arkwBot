#include "SkillActionDescription.h"

void SkillActionDescription::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SkillActionDescription(input);
}

void SkillActionDescription::deserializeAs_SkillActionDescription(ICustomDataInput &input) {
    this->_skillIdFunc(input);
}

void SkillActionDescription::_skillIdFunc(ICustomDataInput &input) {
    this->skillId = input.readVarUhShort();

}

