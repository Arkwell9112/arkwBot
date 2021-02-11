#include "PaddockPropertiesMessage.h"

void PaddockPropertiesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockPropertiesMessage(input);
}

void PaddockPropertiesMessage::deserializeAs_PaddockPropertiesMessage(ICustomDataInput &input) {
    this->properties.deserialize(input);
}

