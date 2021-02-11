#include "EntitiesInformationMessage.h"

void EntitiesInformationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EntitiesInformationMessage(input);
}

void EntitiesInformationMessage::deserializeAs_EntitiesInformationMessage(ICustomDataInput &input) {
    EntityInformation _item1;
    unsigned int _entitiesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _entitiesLen; _i1++) {
        _item1.deserialize(input);
        this->entities.push_back(_item1);
    }
}

void EntitiesInformationMessage::_entitiesFunc(ICustomDataInput &input) {
    EntityInformation _item;
    _item.deserialize(input);
    this->entities.push_back(_item);
}

