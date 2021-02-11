#include "HouseOnMapInformations.h"

void HouseOnMapInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseOnMapInformations(input);
}

void HouseOnMapInformations::deserializeAs_HouseOnMapInformations(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    HouseInstanceInformations _item2;
    HouseInformations::deserialize(input);
    unsigned int _doorsOnMapLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _doorsOnMapLen; _i1++) {
        _val1 = input.readInt();

        this->doorsOnMap.push_back(_val1);
    }
    unsigned int _houseInstancesLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _houseInstancesLen; _i2++) {
        _item2.deserialize(input);
        this->houseInstances.push_back(_item2);
    }
}

void HouseOnMapInformations::_doorsOnMapFunc(ICustomDataInput &input) {
    unsigned int _val = input.readInt();

    this->doorsOnMap.push_back(_val);
}

void HouseOnMapInformations::_houseInstancesFunc(ICustomDataInput &input) {
    HouseInstanceInformations _item;
    _item.deserialize(input);
    this->houseInstances.push_back(_item);
}

