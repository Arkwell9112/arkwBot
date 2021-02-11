#include "GameActionFightSpellImmunityMessage.h"

void GameActionFightSpellImmunityMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightSpellImmunityMessage(input);
}

void GameActionFightSpellImmunityMessage::deserializeAs_GameActionFightSpellImmunityMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_spellIdFunc(input);
}

void GameActionFightSpellImmunityMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightSpellImmunityMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

