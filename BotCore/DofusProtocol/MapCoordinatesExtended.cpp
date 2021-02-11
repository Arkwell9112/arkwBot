#include "MapCoordinatesExtended.h"

void MapCoordinatesExtended::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapCoordinatesExtended(input);
}

void MapCoordinatesExtended::deserializeAs_MapCoordinatesExtended(ICustomDataInput &input) {
    MapCoordinatesAndId::deserialize(input);
    this->_subAreaIdFunc(input);
}

void MapCoordinatesExtended::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

