#include "ExchangeIsReadyMessage.h"

void ExchangeIsReadyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeIsReadyMessage(input);
}

void ExchangeIsReadyMessage::deserializeAs_ExchangeIsReadyMessage(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_readyFunc(input);
}

void ExchangeIsReadyMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

void ExchangeIsReadyMessage::_readyFunc(ICustomDataInput &input) {
    this->ready = input.readBoolean();
}

