#include "MapObstacleUpdateMessage.h"

void MapObstacleUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapObstacleUpdateMessage(input);
}

void MapObstacleUpdateMessage::deserializeAs_MapObstacleUpdateMessage(ICustomDataInput &input) {
    MapObstacle _item1;
    unsigned int _obstaclesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _obstaclesLen; _i1++) {
        _item1.deserialize(input);
        this->obstacles.push_back(_item1);
    }
}

void MapObstacleUpdateMessage::_obstaclesFunc(ICustomDataInput &input) {
    MapObstacle _item;
    _item.deserialize(input);
    this->obstacles.push_back(_item);
}

