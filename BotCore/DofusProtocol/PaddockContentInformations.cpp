#include "PaddockContentInformations.h"

void PaddockContentInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockContentInformations(input);
}

void PaddockContentInformations::deserializeAs_PaddockContentInformations(ICustomDataInput &input) {
    MountInformationsForPaddock _item7;
    PaddockInformations::deserialize(input);
    this->_paddockIdFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    this->_abandonnedFunc(input);
    unsigned int _mountsInformationsLen = input.readUnsignedShort();
    for (unsigned int _i7 = 0; _i7 < _mountsInformationsLen; _i7++) {
        _item7.deserialize(input);
        this->mountsInformations.push_back(_item7);
    }
}

void PaddockContentInformations::_paddockIdFunc(ICustomDataInput &input) {
    this->paddockId = input.readDouble();

}

void PaddockContentInformations::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void PaddockContentInformations::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void PaddockContentInformations::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void PaddockContentInformations::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PaddockContentInformations::_abandonnedFunc(ICustomDataInput &input) {
    this->abandonned = input.readBoolean();
}

void PaddockContentInformations::_mountsInformationsFunc(ICustomDataInput &input) {
    MountInformationsForPaddock _item;
    _item.deserialize(input);
    this->mountsInformations.push_back(_item);
}

