#include "StatedElementUpdatedMessage.h"

void StatedElementUpdatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatedElementUpdatedMessage(input);
}

void StatedElementUpdatedMessage::deserializeAs_StatedElementUpdatedMessage(ICustomDataInput &input) {
    this->statedElement.deserialize(input);
}

