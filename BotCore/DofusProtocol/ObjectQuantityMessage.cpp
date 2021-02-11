#include "ObjectQuantityMessage.h"

void ObjectQuantityMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectQuantityMessage(input);
}

void ObjectQuantityMessage::deserializeAs_ObjectQuantityMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
    this->_originFunc(input);
}

void ObjectQuantityMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ObjectQuantityMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

void ObjectQuantityMessage::_originFunc(ICustomDataInput &input) {
    this->origin = input.readByte();

}

