#include "ObjectAddedMessage.h"

void ObjectAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectAddedMessage(input);
}

void ObjectAddedMessage::deserializeAs_ObjectAddedMessage(ICustomDataInput &input) {
    this->object.deserialize(input);
    this->_originFunc(input);
}

void ObjectAddedMessage::_originFunc(ICustomDataInput &input) {
    this->origin = input.readByte();

}

