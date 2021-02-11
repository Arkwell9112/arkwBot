#include "ObjectsDeletedMessage.h"

void ObjectsDeletedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectsDeletedMessage(input);
}

void ObjectsDeletedMessage::deserializeAs_ObjectsDeletedMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _objectUIDLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectUIDLen; _i1++) {
        _val1 = input.readVarUhInt();

        this->objectUID.push_back(_val1);
    }
}

void ObjectsDeletedMessage::_objectUIDFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->objectUID.push_back(_val);
}

