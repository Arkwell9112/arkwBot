#include "InteractiveElementSkill.h"

void InteractiveElementSkill::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveElementSkill(input);
}

void InteractiveElementSkill::deserializeAs_InteractiveElementSkill(ICustomDataInput &input) {
    this->_skillIdFunc(input);
    this->_skillInstanceUidFunc(input);
}

void InteractiveElementSkill::_skillIdFunc(ICustomDataInput &input) {
    this->skillId = input.readVarUhInt();

}

void InteractiveElementSkill::_skillInstanceUidFunc(ICustomDataInput &input) {
    this->skillInstanceUid = input.readInt();

}

