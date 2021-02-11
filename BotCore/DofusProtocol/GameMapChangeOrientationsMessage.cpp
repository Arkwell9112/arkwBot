#include "GameMapChangeOrientationsMessage.h"

void GameMapChangeOrientationsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameMapChangeOrientationsMessage(input);
}

void GameMapChangeOrientationsMessage::deserializeAs_GameMapChangeOrientationsMessage(ICustomDataInput &input) {
    ActorOrientation _item1;
    unsigned int _orientationsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _orientationsLen; _i1++) {
        _item1.deserialize(input);
        this->orientations.push_back(_item1);
    }
}

void GameMapChangeOrientationsMessage::_orientationsFunc(ICustomDataInput &input) {
    ActorOrientation _item;
    _item.deserialize(input);
    this->orientations.push_back(_item);
}

