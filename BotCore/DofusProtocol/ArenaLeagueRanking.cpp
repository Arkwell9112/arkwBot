#include "ArenaLeagueRanking.h"

void ArenaLeagueRanking::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ArenaLeagueRanking(input);
}

void ArenaLeagueRanking::deserializeAs_ArenaLeagueRanking(ICustomDataInput &input) {
    this->_rankFunc(input);
    this->_leagueIdFunc(input);
    this->_leaguePointsFunc(input);
    this->_totalLeaguePointsFunc(input);
    this->_ladderPositionFunc(input);
}

void ArenaLeagueRanking::_rankFunc(ICustomDataInput &input) {
    this->rank = input.readVarUhShort();

}

void ArenaLeagueRanking::_leagueIdFunc(ICustomDataInput &input) {
    this->leagueId = input.readVarUhShort();

}

void ArenaLeagueRanking::_leaguePointsFunc(ICustomDataInput &input) {
    this->leaguePoints = input.readVarShort();
}

void ArenaLeagueRanking::_totalLeaguePointsFunc(ICustomDataInput &input) {
    this->totalLeaguePoints = input.readVarShort();
}

void ArenaLeagueRanking::_ladderPositionFunc(ICustomDataInput &input) {
    this->ladderPosition = input.readInt();
}

