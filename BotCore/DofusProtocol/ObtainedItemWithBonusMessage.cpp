#include "ObtainedItemWithBonusMessage.h"

void ObtainedItemWithBonusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObtainedItemWithBonusMessage(input);
}

void ObtainedItemWithBonusMessage::deserializeAs_ObtainedItemWithBonusMessage(ICustomDataInput &input) {
    ObtainedItemMessage::deserialize(input);
    this->_bonusQuantityFunc(input);
}

void ObtainedItemWithBonusMessage::_bonusQuantityFunc(ICustomDataInput &input) {
    this->bonusQuantity = input.readVarUhInt();

}

