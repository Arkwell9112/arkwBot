#include "DungeonPartyFinderPlayer.h"

void DungeonPartyFinderPlayer::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DungeonPartyFinderPlayer(input);
}

void DungeonPartyFinderPlayer::deserializeAs_DungeonPartyFinderPlayer(ICustomDataInput &input) {
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->_levelFunc(input);
}

void DungeonPartyFinderPlayer::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void DungeonPartyFinderPlayer::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

void DungeonPartyFinderPlayer::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();

}

void DungeonPartyFinderPlayer::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

void DungeonPartyFinderPlayer::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

