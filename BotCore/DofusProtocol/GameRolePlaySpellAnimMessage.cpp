#include "GameRolePlaySpellAnimMessage.h"

void GameRolePlaySpellAnimMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlaySpellAnimMessage(input);
}

void GameRolePlaySpellAnimMessage::deserializeAs_GameRolePlaySpellAnimMessage(ICustomDataInput &input) {
    this->_casterIdFunc(input);
    this->_targetCellIdFunc(input);
    this->_spellIdFunc(input);
    this->_spellLevelFunc(input);
}

void GameRolePlaySpellAnimMessage::_casterIdFunc(ICustomDataInput &input) {
    this->casterId = input.readVarUhLong();

}

void GameRolePlaySpellAnimMessage::_targetCellIdFunc(ICustomDataInput &input) {
    this->targetCellId = input.readVarUhShort();

}

void GameRolePlaySpellAnimMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

void GameRolePlaySpellAnimMessage::_spellLevelFunc(ICustomDataInput &input) {
    this->spellLevel = input.readShort();

}

