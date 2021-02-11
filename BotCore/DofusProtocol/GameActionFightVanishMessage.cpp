#include "GameActionFightVanishMessage.h"

void GameActionFightVanishMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightVanishMessage(input);
}

void GameActionFightVanishMessage::deserializeAs_GameActionFightVanishMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
}

void GameActionFightVanishMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

