#include "ObjectErrorMessage.h"

void ObjectErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectErrorMessage(input);
}

void ObjectErrorMessage::deserializeAs_ObjectErrorMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void ObjectErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();
}

