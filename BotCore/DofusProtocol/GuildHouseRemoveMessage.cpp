#include "GuildHouseRemoveMessage.h"

void GuildHouseRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildHouseRemoveMessage(input);
}

void GuildHouseRemoveMessage::deserializeAs_GuildHouseRemoveMessage(ICustomDataInput &input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
}

void GuildHouseRemoveMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void GuildHouseRemoveMessage::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void GuildHouseRemoveMessage::_secondHandFunc(ICustomDataInput &input) {
    this->secondHand = input.readBoolean();
}

