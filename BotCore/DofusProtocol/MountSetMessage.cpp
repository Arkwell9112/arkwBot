#include "MountSetMessage.h"

void MountSetMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountSetMessage(input);
}

void MountSetMessage::deserializeAs_MountSetMessage(ICustomDataInput &input) {
    this->mountData.deserialize(input);
}

