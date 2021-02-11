#include "MapRewardRateMessage.h"

void MapRewardRateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapRewardRateMessage(input);
}

void MapRewardRateMessage::deserializeAs_MapRewardRateMessage(ICustomDataInput &input) {
    this->_mapRateFunc(input);
    this->_subAreaRateFunc(input);
    this->_totalRateFunc(input);
}

void MapRewardRateMessage::_mapRateFunc(ICustomDataInput &input) {
    this->mapRate = input.readVarShort();
}

void MapRewardRateMessage::_subAreaRateFunc(ICustomDataInput &input) {
    this->subAreaRate = input.readVarShort();
}

void MapRewardRateMessage::_totalRateFunc(ICustomDataInput &input) {
    this->totalRate = input.readVarShort();
}

