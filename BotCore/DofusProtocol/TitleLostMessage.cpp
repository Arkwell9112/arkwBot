#include "TitleLostMessage.h"

void TitleLostMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TitleLostMessage(input);
}

void TitleLostMessage::deserializeAs_TitleLostMessage(ICustomDataInput &input) {
    this->_titleIdFunc(input);
}

void TitleLostMessage::_titleIdFunc(ICustomDataInput &input) {
    this->titleId = input.readVarUhShort();

}

