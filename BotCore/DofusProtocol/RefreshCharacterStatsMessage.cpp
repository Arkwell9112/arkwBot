#include "RefreshCharacterStatsMessage.h"

void RefreshCharacterStatsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_RefreshCharacterStatsMessage(input);
}

void RefreshCharacterStatsMessage::deserializeAs_RefreshCharacterStatsMessage(ICustomDataInput &input) {
    this->_fighterIdFunc(input);
    this->stats.deserialize(input);
}

void RefreshCharacterStatsMessage::_fighterIdFunc(ICustomDataInput &input) {
    this->fighterId = input.readDouble();

}

