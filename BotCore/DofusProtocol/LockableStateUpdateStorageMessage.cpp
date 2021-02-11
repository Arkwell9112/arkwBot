#include "LockableStateUpdateStorageMessage.h"

void LockableStateUpdateStorageMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LockableStateUpdateStorageMessage(input);
}

void LockableStateUpdateStorageMessage::deserializeAs_LockableStateUpdateStorageMessage(ICustomDataInput &input) {
    LockableStateUpdateAbstractMessage::deserialize(input);
    this->_mapIdFunc(input);
    this->_elementIdFunc(input);
}

void LockableStateUpdateStorageMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void LockableStateUpdateStorageMessage::_elementIdFunc(ICustomDataInput &input) {
    this->elementId = input.readVarUhInt();

}

