#include "CharacterReplayWithRemodelRequestMessage.h"

void CharacterReplayWithRemodelRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterReplayWithRemodelRequestMessage(input);
}

void CharacterReplayWithRemodelRequestMessage::deserializeAs_CharacterReplayWithRemodelRequestMessage(
        ICustomDataInput &input) {
    CharacterReplayRequestMessage::deserialize(input);
    this->remodel.deserialize(input);
}

