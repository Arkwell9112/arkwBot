#include "GameActionFightSpellCooldownVariationMessage.h"

void GameActionFightSpellCooldownVariationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightSpellCooldownVariationMessage(input);
}

void GameActionFightSpellCooldownVariationMessage::deserializeAs_GameActionFightSpellCooldownVariationMessage(
        ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_spellIdFunc(input);
    this->_valueFunc(input);
}

void GameActionFightSpellCooldownVariationMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightSpellCooldownVariationMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

void GameActionFightSpellCooldownVariationMessage::_valueFunc(ICustomDataInput &input) {
    this->value = input.readVarShort();
}

