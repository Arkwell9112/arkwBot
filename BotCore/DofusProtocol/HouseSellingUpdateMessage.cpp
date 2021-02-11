#include "HouseSellingUpdateMessage.h"

void HouseSellingUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseSellingUpdateMessage(input);
}

void HouseSellingUpdateMessage::deserializeAs_HouseSellingUpdateMessage(ICustomDataInput &input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
    this->_realPriceFunc(input);
    this->_buyerNameFunc(input);
}

void HouseSellingUpdateMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void HouseSellingUpdateMessage::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void HouseSellingUpdateMessage::_secondHandFunc(ICustomDataInput &input) {
    this->secondHand = input.readBoolean();
}

void HouseSellingUpdateMessage::_realPriceFunc(ICustomDataInput &input) {
    this->realPrice = input.readVarUhLong();

}

void HouseSellingUpdateMessage::_buyerNameFunc(ICustomDataInput &input) {
    this->buyerName = input.readUTF();
}

