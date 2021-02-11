#include "GuildFightPlayersHelpersJoinMessage.h"

void GuildFightPlayersHelpersJoinMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFightPlayersHelpersJoinMessage(input);
}

void GuildFightPlayersHelpersJoinMessage::deserializeAs_GuildFightPlayersHelpersJoinMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->playerInfo.deserialize(input);
}

void GuildFightPlayersHelpersJoinMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readDouble();

}

