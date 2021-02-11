#include "FinishMoveListMessage.h"

void FinishMoveListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FinishMoveListMessage(input);
}

void FinishMoveListMessage::deserializeAs_FinishMoveListMessage(ICustomDataInput &input) {
    FinishMoveInformations _item1;
    unsigned int _finishMovesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _finishMovesLen; _i1++) {
        _item1.deserialize(input);
        this->finishMoves.push_back(_item1);
    }
}

void FinishMoveListMessage::_finishMovesFunc(ICustomDataInput &input) {
    FinishMoveInformations _item;
    _item.deserialize(input);
    this->finishMoves.push_back(_item);
}

