#include "NicknameChoiceRequestMessage.h"

void NicknameChoiceRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NicknameChoiceRequestMessage(input);
}

void NicknameChoiceRequestMessage::deserializeAs_NicknameChoiceRequestMessage(ICustomDataInput &input) {
    this->_nicknameFunc(input);
}

void NicknameChoiceRequestMessage::_nicknameFunc(ICustomDataInput &input) {
    this->nickname = input.readUTF();
}

