#include "ExchangeCraftCountModifiedMessage.h"

void ExchangeCraftCountModifiedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeCraftCountModifiedMessage(input);
}

void ExchangeCraftCountModifiedMessage::deserializeAs_ExchangeCraftCountModifiedMessage(ICustomDataInput &input) {
    this->_countFunc(input);
}

void ExchangeCraftCountModifiedMessage::_countFunc(ICustomDataInput &input) {
    this->count = input.readVarInt();
}

