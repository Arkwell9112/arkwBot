#include "UpdateMountBooleanCharacteristic.h"

void UpdateMountBooleanCharacteristic::deserialize(ICustomDataInput &input) {
    this->deserializeAs_UpdateMountBooleanCharacteristic(input);
}

void UpdateMountBooleanCharacteristic::deserializeAs_UpdateMountBooleanCharacteristic(ICustomDataInput &input) {
    UpdateMountCharacteristic::deserialize(input);
    this->_valueFunc(input);
}

void UpdateMountBooleanCharacteristic::_valueFunc(ICustomDataInput &input) {
    this->value = input.readBoolean();
}

