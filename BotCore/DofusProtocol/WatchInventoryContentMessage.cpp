#include "WatchInventoryContentMessage.h"

void WatchInventoryContentMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_WatchInventoryContentMessage(input);
}

void WatchInventoryContentMessage::deserializeAs_WatchInventoryContentMessage(ICustomDataInput &input) {
    InventoryContentMessage::deserialize(input);
}

