#include "TeleportDestination.h"

void TeleportDestination::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportDestination(input);
}

void TeleportDestination::deserializeAs_TeleportDestination(ICustomDataInput &input) {
    this->_typeFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    this->_levelFunc(input);
    this->_costFunc(input);
}

void TeleportDestination::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

void TeleportDestination::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void TeleportDestination::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void TeleportDestination::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void TeleportDestination::_costFunc(ICustomDataInput &input) {
    this->cost = input.readVarUhShort();

}

