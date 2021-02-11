#include "ObjectModifiedMessage.h"

void ObjectModifiedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectModifiedMessage(input);
}

void ObjectModifiedMessage::deserializeAs_ObjectModifiedMessage(ICustomDataInput &input) {
    this->object.deserialize(input);
}

