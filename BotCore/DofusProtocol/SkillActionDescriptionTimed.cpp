#include "SkillActionDescriptionTimed.h"

void SkillActionDescriptionTimed::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SkillActionDescriptionTimed(input);
}

void SkillActionDescriptionTimed::deserializeAs_SkillActionDescriptionTimed(ICustomDataInput &input) {
    SkillActionDescription::deserialize(input);
    this->_timeFunc(input);
}

void SkillActionDescriptionTimed::_timeFunc(ICustomDataInput &input) {
    this->time = input.readUnsignedByte();

}

