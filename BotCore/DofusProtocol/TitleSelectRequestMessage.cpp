#include "TitleSelectRequestMessage.h"

void TitleSelectRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TitleSelectRequestMessage(input);
}

void TitleSelectRequestMessage::deserializeAs_TitleSelectRequestMessage(ICustomDataInput &input) {
    this->_titleIdFunc(input);
}

void TitleSelectRequestMessage::_titleIdFunc(ICustomDataInput &input) {
    this->titleId = input.readVarUhShort();

}

