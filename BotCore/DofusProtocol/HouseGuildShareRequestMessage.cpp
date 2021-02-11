#include "HouseGuildShareRequestMessage.h"

void HouseGuildShareRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseGuildShareRequestMessage(input);
}

void HouseGuildShareRequestMessage::deserializeAs_HouseGuildShareRequestMessage(ICustomDataInput &input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_enableFunc(input);
    this->_rightsFunc(input);
}

void HouseGuildShareRequestMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void HouseGuildShareRequestMessage::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void HouseGuildShareRequestMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

void HouseGuildShareRequestMessage::_rightsFunc(ICustomDataInput &input) {
    this->rights = input.readVarUhInt();

}

