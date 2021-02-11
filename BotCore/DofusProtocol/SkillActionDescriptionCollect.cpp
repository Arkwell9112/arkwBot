#include "SkillActionDescriptionCollect.h"

void SkillActionDescriptionCollect::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SkillActionDescriptionCollect(input);
}

void SkillActionDescriptionCollect::deserializeAs_SkillActionDescriptionCollect(ICustomDataInput &input) {
    SkillActionDescriptionTimed::deserialize(input);
    this->_minFunc(input);
    this->_maxFunc(input);
}

void SkillActionDescriptionCollect::_minFunc(ICustomDataInput &input) {
    this->min = input.readVarUhShort();

}

void SkillActionDescriptionCollect::_maxFunc(ICustomDataInput &input) {
    this->max = input.readVarUhShort();

}

