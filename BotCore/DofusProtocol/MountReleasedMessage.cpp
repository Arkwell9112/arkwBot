#include "MountReleasedMessage.h"

void MountReleasedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountReleasedMessage(input);
}

void MountReleasedMessage::deserializeAs_MountReleasedMessage(ICustomDataInput &input) {
    this->_mountIdFunc(input);
}

void MountReleasedMessage::_mountIdFunc(ICustomDataInput &input) {
    this->mountId = input.readVarInt();
}

