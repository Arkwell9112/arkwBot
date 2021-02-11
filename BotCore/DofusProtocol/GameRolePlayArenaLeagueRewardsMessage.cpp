#include "GameRolePlayArenaLeagueRewardsMessage.h"

void GameRolePlayArenaLeagueRewardsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaLeagueRewardsMessage(input);
}

void
GameRolePlayArenaLeagueRewardsMessage::deserializeAs_GameRolePlayArenaLeagueRewardsMessage(ICustomDataInput &input) {
    this->_seasonIdFunc(input);
    this->_leagueIdFunc(input);
    this->_ladderPositionFunc(input);
    this->_endSeasonRewardFunc(input);
}

void GameRolePlayArenaLeagueRewardsMessage::_seasonIdFunc(ICustomDataInput &input) {
    this->seasonId = input.readVarUhShort();

}

void GameRolePlayArenaLeagueRewardsMessage::_leagueIdFunc(ICustomDataInput &input) {
    this->leagueId = input.readVarUhShort();

}

void GameRolePlayArenaLeagueRewardsMessage::_ladderPositionFunc(ICustomDataInput &input) {
    this->ladderPosition = input.readInt();
}

void GameRolePlayArenaLeagueRewardsMessage::_endSeasonRewardFunc(ICustomDataInput &input) {
    this->endSeasonReward = input.readBoolean();
}

