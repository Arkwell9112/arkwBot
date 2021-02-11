#include "ObjectSetPositionMessage.h"

void ObjectSetPositionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectSetPositionMessage(input);
}

void ObjectSetPositionMessage::deserializeAs_ObjectSetPositionMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
    this->_positionFunc(input);
    this->_quantityFunc(input);
}

void ObjectSetPositionMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ObjectSetPositionMessage::_positionFunc(ICustomDataInput &input) {
    this->position = input.readShort();

}

void ObjectSetPositionMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

