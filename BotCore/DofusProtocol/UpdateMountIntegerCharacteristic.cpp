#include "UpdateMountIntegerCharacteristic.h"

void UpdateMountIntegerCharacteristic::deserialize(ICustomDataInput &input) {
    this->deserializeAs_UpdateMountIntegerCharacteristic(input);
}

void UpdateMountIntegerCharacteristic::deserializeAs_UpdateMountIntegerCharacteristic(ICustomDataInput &input) {
    UpdateMountCharacteristic::deserialize(input);
    this->_valueFunc(input);
}

void UpdateMountIntegerCharacteristic::_valueFunc(ICustomDataInput &input) {
    this->value = input.readInt();
}

