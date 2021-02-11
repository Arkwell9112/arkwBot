#include "HouseGuildRightsMessage.h"

void HouseGuildRightsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseGuildRightsMessage(input);
}

void HouseGuildRightsMessage::deserializeAs_HouseGuildRightsMessage(ICustomDataInput &input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
    this->guildInfo.deserialize(input);
    this->_rightsFunc(input);
}

void HouseGuildRightsMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void HouseGuildRightsMessage::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void HouseGuildRightsMessage::_secondHandFunc(ICustomDataInput &input) {
    this->secondHand = input.readBoolean();
}

void HouseGuildRightsMessage::_rightsFunc(ICustomDataInput &input) {
    this->rights = input.readVarUhInt();

}

