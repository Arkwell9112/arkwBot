#include "GameActionMarkedCell.h"

void GameActionMarkedCell::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionMarkedCell(input);
}

void GameActionMarkedCell::deserializeAs_GameActionMarkedCell(ICustomDataInput &input) {
    this->_cellIdFunc(input);
    this->_zoneSizeFunc(input);
    this->_cellColorFunc(input);
    this->_cellsTypeFunc(input);
}

void GameActionMarkedCell::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

void GameActionMarkedCell::_zoneSizeFunc(ICustomDataInput &input) {
    this->zoneSize = input.readByte();
}

void GameActionMarkedCell::_cellColorFunc(ICustomDataInput &input) {
    this->cellColor = input.readInt();
}

void GameActionMarkedCell::_cellsTypeFunc(ICustomDataInput &input) {
    this->cellsType = input.readByte();
}

