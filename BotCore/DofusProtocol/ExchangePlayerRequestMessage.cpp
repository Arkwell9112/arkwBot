#include "ExchangePlayerRequestMessage.h"

void ExchangePlayerRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangePlayerRequestMessage(input);
}

void ExchangePlayerRequestMessage::deserializeAs_ExchangePlayerRequestMessage(ICustomDataInput &input) {
    ExchangeRequestMessage::deserialize(input);
    this->_targetFunc(input);
}

void ExchangePlayerRequestMessage::_targetFunc(ICustomDataInput &input) {
    this->target = input.readVarUhLong();

}

