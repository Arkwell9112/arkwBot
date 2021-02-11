#include "TitleGainedMessage.h"

void TitleGainedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TitleGainedMessage(input);
}

void TitleGainedMessage::deserializeAs_TitleGainedMessage(ICustomDataInput &input) {
    this->_titleIdFunc(input);
}

void TitleGainedMessage::_titleIdFunc(ICustomDataInput &input) {
    this->titleId = input.readVarUhShort();

}

