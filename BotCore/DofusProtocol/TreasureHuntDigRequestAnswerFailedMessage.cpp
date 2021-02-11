#include "TreasureHuntDigRequestAnswerFailedMessage.h"

void TreasureHuntDigRequestAnswerFailedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntDigRequestAnswerFailedMessage(input);
}

void TreasureHuntDigRequestAnswerFailedMessage::deserializeAs_TreasureHuntDigRequestAnswerFailedMessage(
        ICustomDataInput &input) {
    TreasureHuntDigRequestAnswerMessage::deserialize(input);
    this->_wrongFlagCountFunc(input);
}

void TreasureHuntDigRequestAnswerFailedMessage::_wrongFlagCountFunc(ICustomDataInput &input) {
    this->wrongFlagCount = input.readByte();

}

