#include "GameActionFightCastOnTargetRequestMessage.h"

void GameActionFightCastOnTargetRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightCastOnTargetRequestMessage(input);
}

void GameActionFightCastOnTargetRequestMessage::deserializeAs_GameActionFightCastOnTargetRequestMessage(
        ICustomDataInput &input) {
    this->_spellIdFunc(input);
    this->_targetIdFunc(input);
}

void GameActionFightCastOnTargetRequestMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

void GameActionFightCastOnTargetRequestMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

