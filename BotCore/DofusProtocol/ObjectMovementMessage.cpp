#include "ObjectMovementMessage.h"

void ObjectMovementMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectMovementMessage(input);
}

void ObjectMovementMessage::deserializeAs_ObjectMovementMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
    this->_positionFunc(input);
}

void ObjectMovementMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ObjectMovementMessage::_positionFunc(ICustomDataInput &input) {
    this->position = input.readShort();

}

