#include "MapObstacle.h"

void MapObstacle::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapObstacle(input);
}

void MapObstacle::deserializeAs_MapObstacle(ICustomDataInput &input) {
    this->_obstacleCellIdFunc(input);
    this->_stateFunc(input);
}

void MapObstacle::_obstacleCellIdFunc(ICustomDataInput &input) {
    this->obstacleCellId = input.readVarUhShort();

}

void MapObstacle::_stateFunc(ICustomDataInput &input) {
    this->state = input.readByte();

}

