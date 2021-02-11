#include "NicknameRefusedMessage.h"

void NicknameRefusedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NicknameRefusedMessage(input);
}

void NicknameRefusedMessage::deserializeAs_NicknameRefusedMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void NicknameRefusedMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

