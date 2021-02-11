#include "ObjectUseMessage.h"

void ObjectUseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectUseMessage(input);
}

void ObjectUseMessage::deserializeAs_ObjectUseMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
}

void ObjectUseMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

