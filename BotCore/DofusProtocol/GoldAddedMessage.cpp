#include "GoldAddedMessage.h"

void GoldAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GoldAddedMessage(input);
}

void GoldAddedMessage::deserializeAs_GoldAddedMessage(ICustomDataInput &input) {
    this->gold.deserialize(input);
}

