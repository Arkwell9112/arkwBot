#include "TitleSelectErrorMessage.h"

void TitleSelectErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TitleSelectErrorMessage(input);
}

void TitleSelectErrorMessage::deserializeAs_TitleSelectErrorMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void TitleSelectErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

