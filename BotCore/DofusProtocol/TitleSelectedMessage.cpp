#include "TitleSelectedMessage.h"

void TitleSelectedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TitleSelectedMessage(input);
}

void TitleSelectedMessage::deserializeAs_TitleSelectedMessage(ICustomDataInput &input) {
    this->_titleIdFunc(input);
}

void TitleSelectedMessage::_titleIdFunc(ICustomDataInput &input) {
    this->titleId = input.readVarUhShort();

}

