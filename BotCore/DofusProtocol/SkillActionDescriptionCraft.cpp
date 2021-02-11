#include "SkillActionDescriptionCraft.h"

void SkillActionDescriptionCraft::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SkillActionDescriptionCraft(input);
}

void SkillActionDescriptionCraft::deserializeAs_SkillActionDescriptionCraft(ICustomDataInput &input) {
    SkillActionDescription::deserialize(input);
    this->_probabilityFunc(input);
}

void SkillActionDescriptionCraft::_probabilityFunc(ICustomDataInput &input) {
    this->probability = input.readByte();

}

