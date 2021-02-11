#include "ExchangeObjectMessage.h"

void ExchangeObjectMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectMessage(input);
}

void ExchangeObjectMessage::deserializeAs_ExchangeObjectMessage(ICustomDataInput &input) {
    this->_remoteFunc(input);
}

void ExchangeObjectMessage::_remoteFunc(ICustomDataInput &input) {
    this->remote = input.readBoolean();
}

