#include "MimicryObjectPreviewMessage.h"

void MimicryObjectPreviewMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MimicryObjectPreviewMessage(input);
}

void MimicryObjectPreviewMessage::deserializeAs_MimicryObjectPreviewMessage(ICustomDataInput &input) {
    this->result.deserialize(input);
}

