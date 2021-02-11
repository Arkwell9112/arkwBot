#include "HouseGuildRightsViewMessage.h"

void HouseGuildRightsViewMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseGuildRightsViewMessage(input);
}

void HouseGuildRightsViewMessage::deserializeAs_HouseGuildRightsViewMessage(ICustomDataInput &input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
}

void HouseGuildRightsViewMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void HouseGuildRightsViewMessage::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

