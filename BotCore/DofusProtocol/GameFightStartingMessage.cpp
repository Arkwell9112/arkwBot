#include "GameFightStartingMessage.h"

void GameFightStartingMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightStartingMessage(input);
}

void GameFightStartingMessage::deserializeAs_GameFightStartingMessage(ICustomDataInput &input) {
    this->_fightTypeFunc(input);
    this->_fightIdFunc(input);
    this->_attackerIdFunc(input);
    this->_defenderIdFunc(input);
    this->_containsBossFunc(input);
}

void GameFightStartingMessage::_fightTypeFunc(ICustomDataInput &input) {
    this->fightType = input.readByte();

}

void GameFightStartingMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameFightStartingMessage::_attackerIdFunc(ICustomDataInput &input) {
    this->attackerId = input.readDouble();

}

void GameFightStartingMessage::_defenderIdFunc(ICustomDataInput &input) {
    this->defenderId = input.readDouble();

}

void GameFightStartingMessage::_containsBossFunc(ICustomDataInput &input) {
    this->containsBoss = input.readBoolean();
}

