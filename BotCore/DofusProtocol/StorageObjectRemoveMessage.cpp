#include "StorageObjectRemoveMessage.h"

void StorageObjectRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StorageObjectRemoveMessage(input);
}

void StorageObjectRemoveMessage::deserializeAs_StorageObjectRemoveMessage(ICustomDataInput &input) {
    this->_objectUIDFunc(input);
}

void StorageObjectRemoveMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

