#include "ObjectDropMessage.h"

void ObjectDropMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectDropMessage(input);
}

void ObjectDropMessage::deserializeAs_ObjectDropMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectDropMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ObjectDropMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

