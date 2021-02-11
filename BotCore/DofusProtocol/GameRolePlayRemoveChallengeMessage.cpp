#include "GameRolePlayRemoveChallengeMessage.h"

void GameRolePlayRemoveChallengeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayRemoveChallengeMessage(input);
}

void GameRolePlayRemoveChallengeMessage::deserializeAs_GameRolePlayRemoveChallengeMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
}

void GameRolePlayRemoveChallengeMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

