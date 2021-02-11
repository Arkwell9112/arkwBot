#include "InteractiveElementUpdatedMessage.h"

void InteractiveElementUpdatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveElementUpdatedMessage(input);
}

void InteractiveElementUpdatedMessage::deserializeAs_InteractiveElementUpdatedMessage(ICustomDataInput &input) {
    this->interactiveElement.deserialize(input);
}

