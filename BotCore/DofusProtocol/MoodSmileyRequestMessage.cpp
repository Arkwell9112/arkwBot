#include "MoodSmileyRequestMessage.h"

void MoodSmileyRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MoodSmileyRequestMessage(input);
}

void MoodSmileyRequestMessage::deserializeAs_MoodSmileyRequestMessage(ICustomDataInput &input) {
    this->_smileyIdFunc(input);
}

void MoodSmileyRequestMessage::_smileyIdFunc(ICustomDataInput &input) {
    this->smileyId = input.readVarUhShort();

}

