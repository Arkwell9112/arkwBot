#include "HumanOptionSkillUse.h"

void HumanOptionSkillUse::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HumanOptionSkillUse(input);
}

void HumanOptionSkillUse::deserializeAs_HumanOptionSkillUse(ICustomDataInput &input) {
    HumanOption::deserialize(input);
    this->_elementIdFunc(input);
    this->_skillIdFunc(input);
    this->_skillEndTimeFunc(input);
}

void HumanOptionSkillUse::_elementIdFunc(ICustomDataInput &input) {
    this->elementId = input.readVarUhInt();

}

void HumanOptionSkillUse::_skillIdFunc(ICustomDataInput &input) {
    this->skillId = input.readVarUhShort();

}

void HumanOptionSkillUse::_skillEndTimeFunc(ICustomDataInput &input) {
    this->skillEndTime = input.readDouble();

}

