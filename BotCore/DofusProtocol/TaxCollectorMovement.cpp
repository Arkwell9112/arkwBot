#include "TaxCollectorMovement.h"

void TaxCollectorMovement::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorMovement(input);
}

void TaxCollectorMovement::deserializeAs_TaxCollectorMovement(ICustomDataInput &input) {
    this->_movementTypeFunc(input);
    this->basicInfos.deserialize(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
}

void TaxCollectorMovement::_movementTypeFunc(ICustomDataInput &input) {
    this->movementType = input.readByte();

}

void TaxCollectorMovement::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void TaxCollectorMovement::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

