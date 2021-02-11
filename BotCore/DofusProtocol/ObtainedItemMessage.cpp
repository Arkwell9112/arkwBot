#include "ObtainedItemMessage.h"

void ObtainedItemMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObtainedItemMessage(input);
}

void ObtainedItemMessage::deserializeAs_ObtainedItemMessage(ICustomDataInput &input) {
    this->_genericIdFunc(input);
    this->_baseQuantityFunc(input);
}

void ObtainedItemMessage::_genericIdFunc(ICustomDataInput &input) {
    this->genericId = input.readVarUhShort();

}

void ObtainedItemMessage::_baseQuantityFunc(ICustomDataInput &input) {
    this->baseQuantity = input.readVarUhInt();

}

