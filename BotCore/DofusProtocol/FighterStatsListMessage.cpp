#include "FighterStatsListMessage.h"

void FighterStatsListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FighterStatsListMessage(input);
}

void FighterStatsListMessage::deserializeAs_FighterStatsListMessage(ICustomDataInput &input) {
    this->stats.deserialize(input);
}

