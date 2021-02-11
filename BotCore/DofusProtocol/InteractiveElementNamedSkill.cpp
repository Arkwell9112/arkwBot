#include "InteractiveElementNamedSkill.h"

void InteractiveElementNamedSkill::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveElementNamedSkill(input);
}

void InteractiveElementNamedSkill::deserializeAs_InteractiveElementNamedSkill(ICustomDataInput &input) {
    InteractiveElementSkill::deserialize(input);
    this->_nameIdFunc(input);
}

void InteractiveElementNamedSkill::_nameIdFunc(ICustomDataInput &input) {
    this->nameId = input.readVarUhInt();

}

