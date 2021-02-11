#include "HouseSellRequestMessage.h"

void HouseSellRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseSellRequestMessage(input);
}

void HouseSellRequestMessage::deserializeAs_HouseSellRequestMessage(ICustomDataInput &input) {
    this->_instanceIdFunc(input);
    this->_amountFunc(input);
    this->_forSaleFunc(input);
}

void HouseSellRequestMessage::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void HouseSellRequestMessage::_amountFunc(ICustomDataInput &input) {
    this->amount = input.readVarUhLong();

}

void HouseSellRequestMessage::_forSaleFunc(ICustomDataInput &input) {
    this->forSale = input.readBoolean();
}

