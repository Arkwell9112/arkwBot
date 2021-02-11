#include "StorageObjectUpdateMessage.h"

void StorageObjectUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StorageObjectUpdateMessage(input);
}

void StorageObjectUpdateMessage::deserializeAs_StorageObjectUpdateMessage(ICustomDataInput &input) {
    this->object.deserialize(input);
}

