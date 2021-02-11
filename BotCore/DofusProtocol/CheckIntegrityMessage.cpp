#include "CheckIntegrityMessage.h"

void CheckIntegrityMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CheckIntegrityMessage(input);
}

void CheckIntegrityMessage::deserializeAs_CheckIntegrityMessage(ICustomDataInput &input) {
    int _val1 = 0;
    unsigned int _dataLen = input.readVarInt();
    for (unsigned int _i1 = 0; _i1 < _dataLen; _i1++) {
        _val1 = input.readByte();
        this->data.push_back(_val1);
    }
}

void CheckIntegrityMessage::_dataFunc(ICustomDataInput &input) {
    int _val = input.readByte();
    this->data.push_back(_val);
}

