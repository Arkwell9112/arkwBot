#include "TaxCollectorMovementMessage.h"

void TaxCollectorMovementMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorMovementMessage(input);
}

void TaxCollectorMovementMessage::deserializeAs_TaxCollectorMovementMessage(ICustomDataInput &input) {
    this->_movementTypeFunc(input);
    this->basicInfos.deserialize(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
}

void TaxCollectorMovementMessage::_movementTypeFunc(ICustomDataInput &input) {
    this->movementType = input.readByte();

}

void TaxCollectorMovementMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void TaxCollectorMovementMessage::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

