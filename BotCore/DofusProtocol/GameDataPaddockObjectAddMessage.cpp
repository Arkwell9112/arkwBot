#include "GameDataPaddockObjectAddMessage.h"

void GameDataPaddockObjectAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameDataPaddockObjectAddMessage(input);
}

void GameDataPaddockObjectAddMessage::deserializeAs_GameDataPaddockObjectAddMessage(ICustomDataInput &input) {
    this->paddockItemDescription.deserialize(input);
}

