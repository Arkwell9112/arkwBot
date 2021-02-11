#include "MountDataMessage.h"

void MountDataMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountDataMessage(input);
}

void MountDataMessage::deserializeAs_MountDataMessage(ICustomDataInput &input) {
    this->mountData.deserialize(input);
}

