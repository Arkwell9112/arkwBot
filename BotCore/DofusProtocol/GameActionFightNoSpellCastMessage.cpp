#include "GameActionFightNoSpellCastMessage.h"

void GameActionFightNoSpellCastMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightNoSpellCastMessage(input);
}

void GameActionFightNoSpellCastMessage::deserializeAs_GameActionFightNoSpellCastMessage(ICustomDataInput &input) {
    this->_spellLevelIdFunc(input);
}

void GameActionFightNoSpellCastMessage::_spellLevelIdFunc(ICustomDataInput &input) {
    this->spellLevelId = input.readVarUhInt();

}

