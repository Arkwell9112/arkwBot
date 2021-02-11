#include "UpdateMountCharacteristic.h"

void UpdateMountCharacteristic::deserialize(ICustomDataInput &input) {
    this->deserializeAs_UpdateMountCharacteristic(input);
}

void UpdateMountCharacteristic::deserializeAs_UpdateMountCharacteristic(ICustomDataInput &input) {
    this->_typeFunc(input);
}

void UpdateMountCharacteristic::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

