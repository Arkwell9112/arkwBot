#include "AccessoryPreviewMessage.h"

void AccessoryPreviewMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AccessoryPreviewMessage(input);
}

void AccessoryPreviewMessage::deserializeAs_AccessoryPreviewMessage(ICustomDataInput &input) {
    this->look.deserialize(input);
}

