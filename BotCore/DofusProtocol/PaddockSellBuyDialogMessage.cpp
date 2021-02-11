#include "PaddockSellBuyDialogMessage.h"

void PaddockSellBuyDialogMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockSellBuyDialogMessage(input);
}

void PaddockSellBuyDialogMessage::deserializeAs_PaddockSellBuyDialogMessage(ICustomDataInput &input) {
    this->_bsellFunc(input);
    this->_ownerIdFunc(input);
    this->_priceFunc(input);
}

void PaddockSellBuyDialogMessage::_bsellFunc(ICustomDataInput &input) {
    this->bsell = input.readBoolean();
}

void PaddockSellBuyDialogMessage::_ownerIdFunc(ICustomDataInput &input) {
    this->ownerId = input.readVarUhInt();

}

void PaddockSellBuyDialogMessage::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhLong();

}

