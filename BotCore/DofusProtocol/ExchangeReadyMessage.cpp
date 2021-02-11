#include "ExchangeReadyMessage.h"

void ExchangeReadyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeReadyMessage(input);
}

void ExchangeReadyMessage::deserializeAs_ExchangeReadyMessage(ICustomDataInput &input) {
    this->_readyFunc(input);
    this->_stepFunc(input);
}

void ExchangeReadyMessage::_readyFunc(ICustomDataInput &input) {
    this->ready = input.readBoolean();
}

void ExchangeReadyMessage::_stepFunc(ICustomDataInput &input) {
    this->step = input.readVarUhShort();

}

