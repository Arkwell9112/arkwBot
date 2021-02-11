#include "GameFightJoinRequestMessage.h"

void GameFightJoinRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightJoinRequestMessage(input);
}

void GameFightJoinRequestMessage::deserializeAs_GameFightJoinRequestMessage(ICustomDataInput &input) {
    this->_fighterIdFunc(input);
    this->_fightIdFunc(input);
}

void GameFightJoinRequestMessage::_fighterIdFunc(ICustomDataInput &input) {
    this->fighterId = input.readDouble();

}

void GameFightJoinRequestMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

