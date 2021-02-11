#include "TopTaxCollectorListMessage.h"

void TopTaxCollectorListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TopTaxCollectorListMessage(input);
}

void TopTaxCollectorListMessage::deserializeAs_TopTaxCollectorListMessage(ICustomDataInput &input) {
    AbstractTaxCollectorListMessage::deserialize(input);
    this->_isDungeonFunc(input);
}

void TopTaxCollectorListMessage::_isDungeonFunc(ICustomDataInput &input) {
    this->isDungeon = input.readBoolean();
}

