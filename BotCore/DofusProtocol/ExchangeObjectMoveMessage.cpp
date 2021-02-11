#include "ExchangeObjectMoveMessage.h"

void ExchangeObjectMoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectMoveMessage(input);
}

void ExchangeObjectMoveMessage::deserializeAs_ExchangeObjectMoveMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ExchangeObjectMoveMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ExchangeObjectMoveMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarInt();
}

