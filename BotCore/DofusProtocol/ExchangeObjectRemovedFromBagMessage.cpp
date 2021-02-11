#include "ExchangeObjectRemovedFromBagMessage.h"

void ExchangeObjectRemovedFromBagMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectRemovedFromBagMessage(input);
}

void ExchangeObjectRemovedFromBagMessage::deserializeAs_ExchangeObjectRemovedFromBagMessage(ICustomDataInput &input) {
    ExchangeObjectMessage::deserialize(input);
    this->_objectUIDFunc(input);
}

void ExchangeObjectRemovedFromBagMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

