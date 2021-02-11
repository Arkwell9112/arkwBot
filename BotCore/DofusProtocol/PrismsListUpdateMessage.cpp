#include "PrismsListUpdateMessage.h"

void PrismsListUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismsListUpdateMessage(input);
}

void PrismsListUpdateMessage::deserializeAs_PrismsListUpdateMessage(ICustomDataInput &input) {
    PrismsListMessage::deserialize(input);
}

