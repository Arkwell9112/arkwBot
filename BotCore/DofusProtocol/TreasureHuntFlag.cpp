#include "TreasureHuntFlag.h"

void TreasureHuntFlag::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntFlag(input);
}

void TreasureHuntFlag::deserializeAs_TreasureHuntFlag(ICustomDataInput &input) {
    this->_mapIdFunc(input);
    this->_stateFunc(input);
}

void TreasureHuntFlag::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void TreasureHuntFlag::_stateFunc(ICustomDataInput &input) {
    this->state = input.readByte();

}

