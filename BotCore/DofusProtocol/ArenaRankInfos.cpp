#include "ArenaRankInfos.h"

void ArenaRankInfos::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ArenaRankInfos(input);
}

void ArenaRankInfos::deserializeAs_ArenaRankInfos(ICustomDataInput &input) {

    if (input.readByte() != 0) {
        this->ranking.deserialize(input);
    }

    if (input.readByte() != 0) {
        this->leagueRanking.deserialize(input);
    }
    this->_victoryCountFunc(input);
    this->_fightcountFunc(input);
    this->_numFightNeededForLadderFunc(input);
}

void ArenaRankInfos::_victoryCountFunc(ICustomDataInput &input) {
    this->victoryCount = input.readVarUhShort();

}

void ArenaRankInfos::_fightcountFunc(ICustomDataInput &input) {
    this->fightcount = input.readVarUhShort();

}

void ArenaRankInfos::_numFightNeededForLadderFunc(ICustomDataInput &input) {
    this->numFightNeededForLadder = input.readShort();

}

