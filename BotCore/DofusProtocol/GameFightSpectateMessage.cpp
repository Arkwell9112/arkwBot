#include "GameFightSpectateMessage.h"

void GameFightSpectateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightSpectateMessage(input);
}

void GameFightSpectateMessage::deserializeAs_GameFightSpectateMessage(ICustomDataInput &input) {
    FightDispellableEffectExtendedInformations _item1;
    GameActionMark _item2;
    Idol _item5;
    GameFightEffectTriggerCount _item6;
    unsigned int _effectsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _effectsLen; _i1++) {
        _item1.deserialize(input);
        this->effects.push_back(_item1);
    }
    unsigned int _marksLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _marksLen; _i2++) {
        _item2.deserialize(input);
        this->marks.push_back(_item2);
    }
    this->_gameTurnFunc(input);
    this->_fightStartFunc(input);
    unsigned int _idolsLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _idolsLen; _i5++) {
        _item5.deserialize(input);
        this->idols.push_back(_item5);
    }
    unsigned int _fxTriggerCountsLen = input.readUnsignedShort();
    for (unsigned int _i6 = 0; _i6 < _fxTriggerCountsLen; _i6++) {
        _item6.deserialize(input);
        this->fxTriggerCounts.push_back(_item6);
    }
}

void GameFightSpectateMessage::_effectsFunc(ICustomDataInput &input) {
    FightDispellableEffectExtendedInformations _item;
    _item.deserialize(input);
    this->effects.push_back(_item);
}

void GameFightSpectateMessage::_marksFunc(ICustomDataInput &input) {
    GameActionMark _item;
    _item.deserialize(input);
    this->marks.push_back(_item);
}

void GameFightSpectateMessage::_gameTurnFunc(ICustomDataInput &input) {
    this->gameTurn = input.readVarUhShort();

}

void GameFightSpectateMessage::_fightStartFunc(ICustomDataInput &input) {
    this->fightStart = input.readInt();

}

void GameFightSpectateMessage::_idolsFunc(ICustomDataInput &input) {
    Idol _item;
    _item.deserialize(input);
    this->idols.push_back(_item);
}

void GameFightSpectateMessage::_fxTriggerCountsFunc(ICustomDataInput &input) {
    GameFightEffectTriggerCount _item;
    _item.deserialize(input);
    this->fxTriggerCounts.push_back(_item);
}

