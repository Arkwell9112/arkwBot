#include "GameActionMark.h"

void GameActionMark::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionMark(input);
}

void GameActionMark::deserializeAs_GameActionMark(ICustomDataInput &input) {
    GameActionMarkedCell _item8;
    this->_markAuthorIdFunc(input);
    this->_markTeamIdFunc(input);
    this->_markSpellIdFunc(input);
    this->_markSpellLevelFunc(input);
    this->_markIdFunc(input);
    this->_markTypeFunc(input);
    this->_markimpactCellFunc(input);
    unsigned int _cellsLen = input.readUnsignedShort();
    for (unsigned int _i8 = 0; _i8 < _cellsLen; _i8++) {
        _item8.deserialize(input);
        this->cells.push_back(_item8);
    }
    this->_activeFunc(input);
}

void GameActionMark::_markAuthorIdFunc(ICustomDataInput &input) {
    this->markAuthorId = input.readDouble();

}

void GameActionMark::_markTeamIdFunc(ICustomDataInput &input) {
    this->markTeamId = input.readByte();

}

void GameActionMark::_markSpellIdFunc(ICustomDataInput &input) {
    this->markSpellId = input.readInt();

}

void GameActionMark::_markSpellLevelFunc(ICustomDataInput &input) {
    this->markSpellLevel = input.readShort();

}

void GameActionMark::_markIdFunc(ICustomDataInput &input) {
    this->markId = input.readShort();
}

void GameActionMark::_markTypeFunc(ICustomDataInput &input) {
    this->markType = input.readByte();
}

void GameActionMark::_markimpactCellFunc(ICustomDataInput &input) {
    this->markimpactCell = input.readShort();

}

void GameActionMark::_cellsFunc(ICustomDataInput &input) {
    GameActionMarkedCell _item;
    _item.deserialize(input);
    this->cells.push_back(_item);
}

void GameActionMark::_activeFunc(ICustomDataInput &input) {
    this->active = input.readBoolean();
}

