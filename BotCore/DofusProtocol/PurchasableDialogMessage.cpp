#include "../IO/BooleanByteWrapper.h"
#include "PurchasableDialogMessage.h"

void PurchasableDialogMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PurchasableDialogMessage(input);
}

void PurchasableDialogMessage::deserializeAs_PurchasableDialogMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_purchasableIdFunc(input);
    this->_purchasableInstanceIdFunc(input);
    this->_priceFunc(input);
}

void PurchasableDialogMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->buyOrSell = BooleanByteWrapper::getFlag(_box0, 0);
    this->secondHand = BooleanByteWrapper::getFlag(_box0, 1);
}

void PurchasableDialogMessage::_purchasableIdFunc(ICustomDataInput &input) {
    this->purchasableId = input.readDouble();

}

void PurchasableDialogMessage::_purchasableInstanceIdFunc(ICustomDataInput &input) {
    this->purchasableInstanceId = input.readInt();

}

void PurchasableDialogMessage::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhLong();

}

