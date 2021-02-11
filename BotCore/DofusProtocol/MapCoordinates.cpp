#include "MapCoordinates.h"

void MapCoordinates::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapCoordinates(input);
}

void MapCoordinates::deserializeAs_MapCoordinates(ICustomDataInput &input) {
    this->_worldXFunc(input);
    this->_worldYFunc(input);
}

void MapCoordinates::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void MapCoordinates::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

