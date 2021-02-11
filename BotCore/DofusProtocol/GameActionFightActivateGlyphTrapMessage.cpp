#include "GameActionFightActivateGlyphTrapMessage.h"

void GameActionFightActivateGlyphTrapMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightActivateGlyphTrapMessage(input);
}

void GameActionFightActivateGlyphTrapMessage::deserializeAs_GameActionFightActivateGlyphTrapMessage(
        ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_markIdFunc(input);
    this->_activeFunc(input);
}

void GameActionFightActivateGlyphTrapMessage::_markIdFunc(ICustomDataInput &input) {
    this->markId = input.readShort();
}

void GameActionFightActivateGlyphTrapMessage::_activeFunc(ICustomDataInput &input) {
    this->active = input.readBoolean();
}

