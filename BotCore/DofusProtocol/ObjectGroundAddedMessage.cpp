#include "ObjectGroundAddedMessage.h"

void ObjectGroundAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectGroundAddedMessage(input);
}

void ObjectGroundAddedMessage::deserializeAs_ObjectGroundAddedMessage(ICustomDataInput &input) {
    this->_cellIdFunc(input);
    this->_objectGIDFunc(input);
}

void ObjectGroundAddedMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

void ObjectGroundAddedMessage::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

