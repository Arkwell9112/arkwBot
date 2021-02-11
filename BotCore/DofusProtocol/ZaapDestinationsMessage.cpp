#include "ZaapDestinationsMessage.h"

void ZaapDestinationsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ZaapDestinationsMessage(input);
}

void ZaapDestinationsMessage::deserializeAs_ZaapDestinationsMessage(ICustomDataInput &input) {
    TeleportDestinationsMessage::deserialize(input);
    this->_spawnMapIdFunc(input);
}

void ZaapDestinationsMessage::_spawnMapIdFunc(ICustomDataInput &input) {
    this->spawnMapId = input.readDouble();

}

