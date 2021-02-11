#include "GameFightUpdateTeamMessage.h"

void GameFightUpdateTeamMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightUpdateTeamMessage(input);
}

void GameFightUpdateTeamMessage::deserializeAs_GameFightUpdateTeamMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->team.deserialize(input);
}

void GameFightUpdateTeamMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

