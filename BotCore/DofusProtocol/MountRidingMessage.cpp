#include "../IO/BooleanByteWrapper.h"
#include "MountRidingMessage.h"

void MountRidingMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountRidingMessage(input);
}

void MountRidingMessage::deserializeAs_MountRidingMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
}

void MountRidingMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->isRiding = BooleanByteWrapper::getFlag(_box0, 0);
    this->isAutopilot = BooleanByteWrapper::getFlag(_box0, 1);
}

