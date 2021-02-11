#include "GameActionFightTriggerGlyphTrapMessage.h"

void GameActionFightTriggerGlyphTrapMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightTriggerGlyphTrapMessage(input);
}

void
GameActionFightTriggerGlyphTrapMessage::deserializeAs_GameActionFightTriggerGlyphTrapMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_markIdFunc(input);
    this->_markImpactCellFunc(input);
    this->_triggeringCharacterIdFunc(input);
    this->_triggeredSpellIdFunc(input);
}

void GameActionFightTriggerGlyphTrapMessage::_markIdFunc(ICustomDataInput &input) {
    this->markId = input.readShort();
}

void GameActionFightTriggerGlyphTrapMessage::_markImpactCellFunc(ICustomDataInput &input) {
    this->markImpactCell = input.readVarUhShort();

}

void GameActionFightTriggerGlyphTrapMessage::_triggeringCharacterIdFunc(ICustomDataInput &input) {
    this->triggeringCharacterId = input.readDouble();

}

void GameActionFightTriggerGlyphTrapMessage::_triggeredSpellIdFunc(ICustomDataInput &input) {
    this->triggeredSpellId = input.readVarUhShort();

}

