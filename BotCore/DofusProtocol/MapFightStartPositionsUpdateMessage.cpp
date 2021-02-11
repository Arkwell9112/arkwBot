#include "MapFightStartPositionsUpdateMessage.h"

void MapFightStartPositionsUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapFightStartPositionsUpdateMessage(input);
}

void MapFightStartPositionsUpdateMessage::deserializeAs_MapFightStartPositionsUpdateMessage(ICustomDataInput &input) {
    this->_mapIdFunc(input);
    this->fightStartPositions.deserialize(input);
}

void MapFightStartPositionsUpdateMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

