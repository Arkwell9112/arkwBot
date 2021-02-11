#include "GameFightStartMessage.h"

void GameFightStartMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightStartMessage(input);
}

void GameFightStartMessage::deserializeAs_GameFightStartMessage(ICustomDataInput &input) {
    Idol _item1;
    unsigned int _idolsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idolsLen; _i1++) {
        _item1.deserialize(input);
        this->idols.push_back(_item1);
    }
}

void GameFightStartMessage::_idolsFunc(ICustomDataInput &input) {
    Idol _item;
    _item.deserialize(input);
    this->idols.push_back(_item);
}

