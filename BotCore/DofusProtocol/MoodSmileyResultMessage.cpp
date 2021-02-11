#include "MoodSmileyResultMessage.h"

void MoodSmileyResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MoodSmileyResultMessage(input);
}

void MoodSmileyResultMessage::deserializeAs_MoodSmileyResultMessage(ICustomDataInput &input) {
    this->_resultCodeFunc(input);
    this->_smileyIdFunc(input);
}

void MoodSmileyResultMessage::_resultCodeFunc(ICustomDataInput &input) {
    this->resultCode = input.readByte();

}

void MoodSmileyResultMessage::_smileyIdFunc(ICustomDataInput &input) {
    this->smileyId = input.readVarUhShort();

}

