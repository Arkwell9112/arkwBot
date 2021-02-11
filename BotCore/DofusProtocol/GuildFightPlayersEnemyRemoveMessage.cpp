#include "GuildFightPlayersEnemyRemoveMessage.h"

void GuildFightPlayersEnemyRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFightPlayersEnemyRemoveMessage(input);
}

void GuildFightPlayersEnemyRemoveMessage::deserializeAs_GuildFightPlayersEnemyRemoveMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_playerIdFunc(input);
}

void GuildFightPlayersEnemyRemoveMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readDouble();

}

void GuildFightPlayersEnemyRemoveMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

