#include "MountSterilizedMessage.h"

void MountSterilizedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountSterilizedMessage(input);
}

void MountSterilizedMessage::deserializeAs_MountSterilizedMessage(ICustomDataInput &input) {
    this->_mountIdFunc(input);
}

void MountSterilizedMessage::_mountIdFunc(ICustomDataInput &input) {
    this->mountId = input.readVarInt();
}

