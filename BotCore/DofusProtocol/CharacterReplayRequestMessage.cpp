#include "CharacterReplayRequestMessage.h"

void CharacterReplayRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterReplayRequestMessage(input);
}

void CharacterReplayRequestMessage::deserializeAs_CharacterReplayRequestMessage(ICustomDataInput &input) {
    this->_characterIdFunc(input);
}

void CharacterReplayRequestMessage::_characterIdFunc(ICustomDataInput &input) {
    this->characterId = input.readVarUhLong();

}

