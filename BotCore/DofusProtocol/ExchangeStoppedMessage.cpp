#include "ExchangeStoppedMessage.h"

void ExchangeStoppedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStoppedMessage(input);
}

void ExchangeStoppedMessage::deserializeAs_ExchangeStoppedMessage(ICustomDataInput &input) {
    this->_idFunc(input);
}

void ExchangeStoppedMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhLong();

}

