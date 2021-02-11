#include "CharacterExperienceGainMessage.h"

void CharacterExperienceGainMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterExperienceGainMessage(input);
}

void CharacterExperienceGainMessage::deserializeAs_CharacterExperienceGainMessage(ICustomDataInput &input) {
    this->_experienceCharacterFunc(input);
    this->_experienceMountFunc(input);
    this->_experienceGuildFunc(input);
    this->_experienceIncarnationFunc(input);
}

void CharacterExperienceGainMessage::_experienceCharacterFunc(ICustomDataInput &input) {
    this->experienceCharacter = input.readVarUhLong();

}

void CharacterExperienceGainMessage::_experienceMountFunc(ICustomDataInput &input) {
    this->experienceMount = input.readVarUhLong();

}

void CharacterExperienceGainMessage::_experienceGuildFunc(ICustomDataInput &input) {
    this->experienceGuild = input.readVarUhLong();

}

void CharacterExperienceGainMessage::_experienceIncarnationFunc(ICustomDataInput &input) {
    this->experienceIncarnation = input.readVarUhLong();

}

