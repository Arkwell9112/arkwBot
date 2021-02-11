#include "ForgettableSpellEquipmentSlotsMessage.h"

void ForgettableSpellEquipmentSlotsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ForgettableSpellEquipmentSlotsMessage(input);
}

void
ForgettableSpellEquipmentSlotsMessage::deserializeAs_ForgettableSpellEquipmentSlotsMessage(ICustomDataInput &input) {
    this->_quantityFunc(input);
}

void ForgettableSpellEquipmentSlotsMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarShort();
}

