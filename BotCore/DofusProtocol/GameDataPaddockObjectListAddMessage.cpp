#include "GameDataPaddockObjectListAddMessage.h"

void GameDataPaddockObjectListAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameDataPaddockObjectListAddMessage(input);
}

void GameDataPaddockObjectListAddMessage::deserializeAs_GameDataPaddockObjectListAddMessage(ICustomDataInput &input) {
    PaddockItem _item1;
    unsigned int _paddockItemDescriptionLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _paddockItemDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->paddockItemDescription.push_back(_item1);
    }
}

void GameDataPaddockObjectListAddMessage::_paddockItemDescriptionFunc(ICustomDataInput &input) {
    PaddockItem _item;
    _item.deserialize(input);
    this->paddockItemDescription.push_back(_item);
}

