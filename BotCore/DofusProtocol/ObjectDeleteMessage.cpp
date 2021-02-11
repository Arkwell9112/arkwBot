#include "ObjectDeleteMessage.h"

void ObjectDeleteMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectDeleteMessage(input);
}

void ObjectDeleteMessage::deserializeAs_ObjectDeleteMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectDeleteMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ObjectDeleteMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

