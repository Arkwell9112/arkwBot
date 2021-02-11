#include "ObjectDeletedMessage.h"

void ObjectDeletedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectDeletedMessage(input);
}

void ObjectDeletedMessage::deserializeAs_ObjectDeletedMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
}

void ObjectDeletedMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

