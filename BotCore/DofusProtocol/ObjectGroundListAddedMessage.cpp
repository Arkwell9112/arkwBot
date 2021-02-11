#include "ObjectGroundListAddedMessage.h"

void ObjectGroundListAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectGroundListAddedMessage(input);
}

void ObjectGroundListAddedMessage::deserializeAs_ObjectGroundListAddedMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _cellsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _cellsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->cells.push_back(_val1);
    }
    unsigned int _referenceIdsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _referenceIdsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->referenceIds.push_back(_val2);
    }
}

void ObjectGroundListAddedMessage::_cellsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->cells.push_back(_val);
}

void ObjectGroundListAddedMessage::_referenceIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->referenceIds.push_back(_val);
}

