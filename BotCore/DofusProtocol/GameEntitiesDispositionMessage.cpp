#include "GameEntitiesDispositionMessage.h"

void GameEntitiesDispositionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameEntitiesDispositionMessage(input);
}

void GameEntitiesDispositionMessage::deserializeAs_GameEntitiesDispositionMessage(ICustomDataInput &input) {
    IdentifiedEntityDispositionInformations _item1;
    unsigned int _dispositionsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _dispositionsLen; _i1++) {
        _item1.deserialize(input);
        this->dispositions.push_back(_item1);
    }
}

void GameEntitiesDispositionMessage::_dispositionsFunc(ICustomDataInput &input) {
    IdentifiedEntityDispositionInformations _item;
    _item.deserialize(input);
    this->dispositions.push_back(_item);
}

