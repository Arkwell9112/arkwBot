#include "CharacterStatsListMessage.h"

void CharacterStatsListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterStatsListMessage(input);
}

void CharacterStatsListMessage::deserializeAs_CharacterStatsListMessage(ICustomDataInput &input) {
    this->stats.deserialize(input);
}

