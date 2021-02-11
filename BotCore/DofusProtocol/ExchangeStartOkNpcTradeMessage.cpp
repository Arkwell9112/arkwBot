#include "ExchangeStartOkNpcTradeMessage.h"

void ExchangeStartOkNpcTradeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkNpcTradeMessage(input);
}

void ExchangeStartOkNpcTradeMessage::deserializeAs_ExchangeStartOkNpcTradeMessage(ICustomDataInput &input) {
    this->_npcIdFunc(input);
}

void ExchangeStartOkNpcTradeMessage::_npcIdFunc(ICustomDataInput &input) {
    this->npcId = input.readDouble();

}

