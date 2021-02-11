#include "ExchangeObjectRemovedMessage.h"

void ExchangeObjectRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectRemovedMessage(input);
}

void ExchangeObjectRemovedMessage::deserializeAs_ExchangeObjectRemovedMessage(ICustomDataInput &input) {
    ExchangeObjectMessage::deserialize(input);
    this->_objectUIDFunc(input);
}

void ExchangeObjectRemovedMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

