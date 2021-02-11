#include "GameContextMoveMultipleElementsMessage.h"

void GameContextMoveMultipleElementsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextMoveMultipleElementsMessage(input);
}

void
GameContextMoveMultipleElementsMessage::deserializeAs_GameContextMoveMultipleElementsMessage(ICustomDataInput &input) {
    EntityMovementInformations _item1;
    unsigned int _movementsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _movementsLen; _i1++) {
        _item1.deserialize(input);
        this->movements.push_back(_item1);
    }
}

void GameContextMoveMultipleElementsMessage::_movementsFunc(ICustomDataInput &input) {
    EntityMovementInformations _item;
    _item.deserialize(input);
    this->movements.push_back(_item);
}

