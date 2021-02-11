#include "ObjectGroundRemovedMessage.h"

void ObjectGroundRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectGroundRemovedMessage(input);
}

void ObjectGroundRemovedMessage::deserializeAs_ObjectGroundRemovedMessage(ICustomDataInput &input) {
    this->_cellFunc(input);
}

void ObjectGroundRemovedMessage::_cellFunc(ICustomDataInput &input) {
    this->cell = input.readVarUhShort();

}

