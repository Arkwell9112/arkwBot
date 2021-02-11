#include "ExchangeCraftResultMessage.h"

void ExchangeCraftResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeCraftResultMessage(input);
}

void ExchangeCraftResultMessage::deserializeAs_ExchangeCraftResultMessage(ICustomDataInput &input) {
    this->_craftResultFunc(input);
}

void ExchangeCraftResultMessage::_craftResultFunc(ICustomDataInput &input) {
    this->craftResult = input.readByte();

}

