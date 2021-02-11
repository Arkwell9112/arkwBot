#include "ExchangeCraftCountRequestMessage.h"

void ExchangeCraftCountRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeCraftCountRequestMessage(input);
}

void ExchangeCraftCountRequestMessage::deserializeAs_ExchangeCraftCountRequestMessage(ICustomDataInput &input) {
    this->_countFunc(input);
}

void ExchangeCraftCountRequestMessage::_countFunc(ICustomDataInput &input) {
    this->count = input.readVarInt();
}

