#include "CharacterSelectionWithRemodelMessage.h"

void CharacterSelectionWithRemodelMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterSelectionWithRemodelMessage(input);
}

void CharacterSelectionWithRemodelMessage::deserializeAs_CharacterSelectionWithRemodelMessage(ICustomDataInput &input) {
    CharacterSelectionMessage::deserialize(input);
    this->remodel.deserialize(input);
}

