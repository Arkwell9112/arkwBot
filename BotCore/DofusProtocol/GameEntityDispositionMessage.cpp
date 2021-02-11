#include "GameEntityDispositionMessage.h"

void GameEntityDispositionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameEntityDispositionMessage(input);
}

void GameEntityDispositionMessage::deserializeAs_GameEntityDispositionMessage(ICustomDataInput &input) {
    this->disposition.deserialize(input);
}

