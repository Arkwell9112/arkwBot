#include "GameFightOptionStateUpdateMessage.h"

void GameFightOptionStateUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightOptionStateUpdateMessage(input);
}

void GameFightOptionStateUpdateMessage::deserializeAs_GameFightOptionStateUpdateMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_teamIdFunc(input);
    this->_optionFunc(input);
    this->_stateFunc(input);
}

void GameFightOptionStateUpdateMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameFightOptionStateUpdateMessage::_teamIdFunc(ICustomDataInput &input) {
    this->teamId = input.readByte();

}

void GameFightOptionStateUpdateMessage::_optionFunc(ICustomDataInput &input) {
    this->option = input.readByte();

}

void GameFightOptionStateUpdateMessage::_stateFunc(ICustomDataInput &input) {
    this->state = input.readBoolean();
}

