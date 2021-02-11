#include "GuildFightPlayersHelpersLeaveMessage.h"

void GuildFightPlayersHelpersLeaveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFightPlayersHelpersLeaveMessage(input);
}

void GuildFightPlayersHelpersLeaveMessage::deserializeAs_GuildFightPlayersHelpersLeaveMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_playerIdFunc(input);
}

void GuildFightPlayersHelpersLeaveMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readDouble();

}

void GuildFightPlayersHelpersLeaveMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

