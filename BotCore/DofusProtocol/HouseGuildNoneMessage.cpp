#include "HouseGuildNoneMessage.h"

void HouseGuildNoneMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseGuildNoneMessage(input);
}

void HouseGuildNoneMessage::deserializeAs_HouseGuildNoneMessage(ICustomDataInput &input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
}

void HouseGuildNoneMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void HouseGuildNoneMessage::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void HouseGuildNoneMessage::_secondHandFunc(ICustomDataInput &input) {
    this->secondHand = input.readBoolean();
}

