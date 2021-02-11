#include "StorageObjectsRemoveMessage.h"

void StorageObjectsRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StorageObjectsRemoveMessage(input);
}

void StorageObjectsRemoveMessage::deserializeAs_StorageObjectsRemoveMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _objectUIDListLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectUIDListLen; _i1++) {
        _val1 = input.readVarUhInt();

        this->objectUIDList.push_back(_val1);
    }
}

void StorageObjectsRemoveMessage::_objectUIDListFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->objectUIDList.push_back(_val);
}

