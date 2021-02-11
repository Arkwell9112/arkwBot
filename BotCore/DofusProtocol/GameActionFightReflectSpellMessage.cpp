#include "GameActionFightReflectSpellMessage.h"

void GameActionFightReflectSpellMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightReflectSpellMessage(input);
}

void GameActionFightReflectSpellMessage::deserializeAs_GameActionFightReflectSpellMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
}

void GameActionFightReflectSpellMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

