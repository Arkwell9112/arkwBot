#include "GameActionFightPointsVariationMessage.h"

void GameActionFightPointsVariationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightPointsVariationMessage(input);
}

void
GameActionFightPointsVariationMessage::deserializeAs_GameActionFightPointsVariationMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_deltaFunc(input);
}

void GameActionFightPointsVariationMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightPointsVariationMessage::_deltaFunc(ICustomDataInput &input) {
    this->delta = input.readShort();
}

