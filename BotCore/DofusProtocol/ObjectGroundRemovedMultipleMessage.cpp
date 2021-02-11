#include "ObjectGroundRemovedMultipleMessage.h"

void ObjectGroundRemovedMultipleMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectGroundRemovedMultipleMessage(input);
}

void ObjectGroundRemovedMultipleMessage::deserializeAs_ObjectGroundRemovedMultipleMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _cellsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _cellsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->cells.push_back(_val1);
    }
}

void ObjectGroundRemovedMultipleMessage::_cellsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->cells.push_back(_val);
}

