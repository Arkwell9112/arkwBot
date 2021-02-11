#include "../IO/BooleanByteWrapper.h"
#include "HouseBuyResultMessage.h"

void HouseBuyResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseBuyResultMessage(input);
}

void HouseBuyResultMessage::deserializeAs_HouseBuyResultMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_realPriceFunc(input);
}

void HouseBuyResultMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->secondHand = BooleanByteWrapper::getFlag(_box0, 0);
    this->bought = BooleanByteWrapper::getFlag(_box0, 1);
}

void HouseBuyResultMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void HouseBuyResultMessage::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void HouseBuyResultMessage::_realPriceFunc(ICustomDataInput &input) {
    this->realPrice = input.readVarUhLong();

}

