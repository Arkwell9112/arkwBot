#include "HavenBagFurnituresMessage.h"

void HavenBagFurnituresMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HavenBagFurnituresMessage(input);
}

void HavenBagFurnituresMessage::deserializeAs_HavenBagFurnituresMessage(ICustomDataInput &input) {
    HavenBagFurnitureInformation _item1;
    unsigned int _furnituresInfosLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _furnituresInfosLen; _i1++) {
        _item1.deserialize(input);
        this->furnituresInfos.push_back(_item1);
    }
}

void HavenBagFurnituresMessage::_furnituresInfosFunc(ICustomDataInput &input) {
    HavenBagFurnitureInformation _item;
    _item.deserialize(input);
    this->furnituresInfos.push_back(_item);
}

