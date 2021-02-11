#include "GuildFightPlayersEnemiesListMessage.h"

void GuildFightPlayersEnemiesListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFightPlayersEnemiesListMessage(input);
}

void GuildFightPlayersEnemiesListMessage::deserializeAs_GuildFightPlayersEnemiesListMessage(ICustomDataInput &input) {
    CharacterMinimalPlusLookInformations _item2;
    this->_fightIdFunc(input);
    unsigned int _playerInfoLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _playerInfoLen; _i2++) {
        _item2.deserialize(input);
        this->playerInfo.push_back(_item2);
    }
}

void GuildFightPlayersEnemiesListMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readDouble();

}

void GuildFightPlayersEnemiesListMessage::_playerInfoFunc(ICustomDataInput &input) {
    CharacterMinimalPlusLookInformations _item;
    _item.deserialize(input);
    this->playerInfo.push_back(_item);
}

