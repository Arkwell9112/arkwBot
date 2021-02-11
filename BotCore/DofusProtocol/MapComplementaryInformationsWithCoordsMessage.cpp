#include "MapComplementaryInformationsWithCoordsMessage.h"

void MapComplementaryInformationsWithCoordsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapComplementaryInformationsWithCoordsMessage(input);
}

void MapComplementaryInformationsWithCoordsMessage::deserializeAs_MapComplementaryInformationsWithCoordsMessage(
        ICustomDataInput &input) {
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
}

void MapComplementaryInformationsWithCoordsMessage::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void MapComplementaryInformationsWithCoordsMessage::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

