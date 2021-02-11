#include "GameFightNewWaveMessage.h"

void GameFightNewWaveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightNewWaveMessage(input);
}

void GameFightNewWaveMessage::deserializeAs_GameFightNewWaveMessage(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_teamIdFunc(input);
    this->_nbTurnBeforeNextWaveFunc(input);
}

void GameFightNewWaveMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readByte();

}

void GameFightNewWaveMessage::_teamIdFunc(ICustomDataInput &input) {
    this->teamId = input.readByte();

}

void GameFightNewWaveMessage::_nbTurnBeforeNextWaveFunc(ICustomDataInput &input) {
    this->nbTurnBeforeNextWave = input.readShort();
}

