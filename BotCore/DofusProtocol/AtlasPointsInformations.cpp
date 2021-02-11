#include "AtlasPointsInformations.h"

void AtlasPointsInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AtlasPointsInformations(input);
}

void AtlasPointsInformations::deserializeAs_AtlasPointsInformations(ICustomDataInput &input) {
    MapCoordinatesExtended _item2;
    this->_typeFunc(input);
    unsigned int _coordsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _coordsLen; _i2++) {
        _item2.deserialize(input);
        this->coords.push_back(_item2);
    }
}

void AtlasPointsInformations::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

void AtlasPointsInformations::_coordsFunc(ICustomDataInput &input) {
    MapCoordinatesExtended _item;
    _item.deserialize(input);
    this->coords.push_back(_item);
}

