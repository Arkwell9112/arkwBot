#include "InteractiveElementWithAgeBonus.h"

void InteractiveElementWithAgeBonus::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveElementWithAgeBonus(input);
}

void InteractiveElementWithAgeBonus::deserializeAs_InteractiveElementWithAgeBonus(ICustomDataInput &input) {
    InteractiveElement::deserialize(input);
    this->_ageBonusFunc(input);
}

void InteractiveElementWithAgeBonus::_ageBonusFunc(ICustomDataInput &input) {
    this->ageBonus = input.readShort();

}

