#include "GameRolePlayPlayerFightFriendlyRequestedMessage.h"

void GameRolePlayPlayerFightFriendlyRequestedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayPlayerFightFriendlyRequestedMessage(input);
}

void GameRolePlayPlayerFightFriendlyRequestedMessage::deserializeAs_GameRolePlayPlayerFightFriendlyRequestedMessage(
        ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_sourceIdFunc(input);
    this->_targetIdFunc(input);
}

void GameRolePlayPlayerFightFriendlyRequestedMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameRolePlayPlayerFightFriendlyRequestedMessage::_sourceIdFunc(ICustomDataInput &input) {
    this->sourceId = input.readVarUhLong();

}

void GameRolePlayPlayerFightFriendlyRequestedMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readVarUhLong();

}

