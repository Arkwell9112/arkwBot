#include "StorageInventoryContentMessage.h"

void StorageInventoryContentMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StorageInventoryContentMessage(input);
}

void StorageInventoryContentMessage::deserializeAs_StorageInventoryContentMessage(ICustomDataInput &input) {
    InventoryContentMessage::deserialize(input);
}

