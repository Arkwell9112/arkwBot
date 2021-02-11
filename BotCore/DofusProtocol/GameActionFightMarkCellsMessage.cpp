#include "GameActionFightMarkCellsMessage.h"

void GameActionFightMarkCellsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightMarkCellsMessage(input);
}

void GameActionFightMarkCellsMessage::deserializeAs_GameActionFightMarkCellsMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->mark.deserialize(input);
}

