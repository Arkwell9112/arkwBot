#include "ArenaRanking.h"

void ArenaRanking::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ArenaRanking(input);
}

void ArenaRanking::deserializeAs_ArenaRanking(ICustomDataInput &input) {
    this->_rankFunc(input);
    this->_bestRankFunc(input);
}

void ArenaRanking::_rankFunc(ICustomDataInput &input) {
    this->rank = input.readVarUhShort();

}

void ArenaRanking::_bestRankFunc(ICustomDataInput &input) {
    this->bestRank = input.readVarUhShort();

}

