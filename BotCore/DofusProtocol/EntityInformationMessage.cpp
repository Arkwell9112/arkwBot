#include "EntityInformationMessage.h"

void EntityInformationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EntityInformationMessage(input);
}

void EntityInformationMessage::deserializeAs_EntityInformationMessage(ICustomDataInput &input) {
    this->entity.deserialize(input);
}

