#include "LockableStateUpdateHouseDoorMessage.h"

void LockableStateUpdateHouseDoorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LockableStateUpdateHouseDoorMessage(input);
}

void LockableStateUpdateHouseDoorMessage::deserializeAs_LockableStateUpdateHouseDoorMessage(ICustomDataInput &input) {
    LockableStateUpdateAbstractMessage::deserialize(input);
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
}

void LockableStateUpdateHouseDoorMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void LockableStateUpdateHouseDoorMessage::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void LockableStateUpdateHouseDoorMessage::_secondHandFunc(ICustomDataInput &input) {
    this->secondHand = input.readBoolean();
}

