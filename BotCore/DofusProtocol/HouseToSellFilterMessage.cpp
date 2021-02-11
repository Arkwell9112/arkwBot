#include "HouseToSellFilterMessage.h"

void HouseToSellFilterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseToSellFilterMessage(input);
}

void HouseToSellFilterMessage::deserializeAs_HouseToSellFilterMessage(ICustomDataInput &input) {
    this->_areaIdFunc(input);
    this->_atLeastNbRoomFunc(input);
    this->_atLeastNbChestFunc(input);
    this->_skillRequestedFunc(input);
    this->_maxPriceFunc(input);
    this->_orderByFunc(input);
}

void HouseToSellFilterMessage::_areaIdFunc(ICustomDataInput &input) {
    this->areaId = input.readInt();
}

void HouseToSellFilterMessage::_atLeastNbRoomFunc(ICustomDataInput &input) {
    this->atLeastNbRoom = input.readByte();

}

void HouseToSellFilterMessage::_atLeastNbChestFunc(ICustomDataInput &input) {
    this->atLeastNbChest = input.readByte();

}

void HouseToSellFilterMessage::_skillRequestedFunc(ICustomDataInput &input) {
    this->skillRequested = input.readVarUhShort();

}

void HouseToSellFilterMessage::_maxPriceFunc(ICustomDataInput &input) {
    this->maxPrice = input.readVarUhLong();

}

void HouseToSellFilterMessage::_orderByFunc(ICustomDataInput &input) {
    this->orderBy = input.readByte();

}

