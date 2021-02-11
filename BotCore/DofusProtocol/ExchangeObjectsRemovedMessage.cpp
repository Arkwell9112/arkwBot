#include "ExchangeObjectsRemovedMessage.h"

void ExchangeObjectsRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectsRemovedMessage(input);
}

void ExchangeObjectsRemovedMessage::deserializeAs_ExchangeObjectsRemovedMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    ExchangeObjectMessage::deserialize(input);
    unsigned int _objectUIDLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectUIDLen; _i1++) {
        _val1 = input.readVarUhInt();

        this->objectUID.push_back(_val1);
    }
}

void ExchangeObjectsRemovedMessage::_objectUIDFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->objectUID.push_back(_val);
}

