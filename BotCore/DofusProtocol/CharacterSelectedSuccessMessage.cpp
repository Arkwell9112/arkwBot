#include "CharacterSelectedSuccessMessage.h"

void CharacterSelectedSuccessMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterSelectedSuccessMessage(input);
}

void CharacterSelectedSuccessMessage::deserializeAs_CharacterSelectedSuccessMessage(ICustomDataInput &input) {
    this->infos.deserialize(input);
    this->_isCollectingStatsFunc(input);
}

void CharacterSelectedSuccessMessage::_isCollectingStatsFunc(ICustomDataInput &input) {
    this->isCollectingStats = input.readBoolean();
}

