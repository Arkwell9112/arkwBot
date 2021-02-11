#include "GameActionFightModifyEffectsDurationMessage.h"

void GameActionFightModifyEffectsDurationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightModifyEffectsDurationMessage(input);
}

void GameActionFightModifyEffectsDurationMessage::deserializeAs_GameActionFightModifyEffectsDurationMessage(
        ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_deltaFunc(input);
}

void GameActionFightModifyEffectsDurationMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightModifyEffectsDurationMessage::_deltaFunc(ICustomDataInput &input) {
    this->delta = input.readShort();
}

