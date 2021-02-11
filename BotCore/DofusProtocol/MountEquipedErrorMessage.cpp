#include "MountEquipedErrorMessage.h"

void MountEquipedErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountEquipedErrorMessage(input);
}

void MountEquipedErrorMessage::deserializeAs_MountEquipedErrorMessage(ICustomDataInput &input) {
    this->_errorTypeFunc(input);
}

void MountEquipedErrorMessage::_errorTypeFunc(ICustomDataInput &input) {
    this->errorType = input.readByte();

}

