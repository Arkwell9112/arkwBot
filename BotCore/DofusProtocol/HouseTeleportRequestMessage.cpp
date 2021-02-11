#include "HouseTeleportRequestMessage.h"

void HouseTeleportRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseTeleportRequestMessage(input);
}

void HouseTeleportRequestMessage::deserializeAs_HouseTeleportRequestMessage(ICustomDataInput &input) {
    this->_houseIdFunc(input);
    this->_houseInstanceIdFunc(input);
}

void HouseTeleportRequestMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void HouseTeleportRequestMessage::_houseInstanceIdFunc(ICustomDataInput &input) {
    this->houseInstanceId = input.readInt();

}

