#include "GameActionFightDispellSpellMessage.h"

void GameActionFightDispellSpellMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightDispellSpellMessage(input);
}

void GameActionFightDispellSpellMessage::deserializeAs_GameActionFightDispellSpellMessage(ICustomDataInput &input) {
    GameActionFightDispellMessage::deserialize(input);
    this->_spellIdFunc(input);
}

void GameActionFightDispellSpellMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

