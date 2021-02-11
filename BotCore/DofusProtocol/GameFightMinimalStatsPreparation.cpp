#include "GameFightMinimalStatsPreparation.h"

void GameFightMinimalStatsPreparation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightMinimalStatsPreparation(input);
}

void GameFightMinimalStatsPreparation::deserializeAs_GameFightMinimalStatsPreparation(ICustomDataInput &input) {
    GameFightMinimalStats::deserialize(input);
    this->_initiativeFunc(input);
}

void GameFightMinimalStatsPreparation::_initiativeFunc(ICustomDataInput &input) {
    this->initiative = input.readVarUhInt();

}

