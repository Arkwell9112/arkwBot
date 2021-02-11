#include "MapCoordinatesAndId.h"

void MapCoordinatesAndId::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapCoordinatesAndId(input);
}

void MapCoordinatesAndId::deserializeAs_MapCoordinatesAndId(ICustomDataInput &input) {
    MapCoordinates::deserialize(input);
    this->_mapIdFunc(input);
}

void MapCoordinatesAndId::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

