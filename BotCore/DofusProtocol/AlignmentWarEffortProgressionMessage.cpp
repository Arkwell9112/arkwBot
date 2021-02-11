#include "AlignmentWarEffortProgressionMessage.h"

void AlignmentWarEffortProgressionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlignmentWarEffortProgressionMessage(input);
}

void AlignmentWarEffortProgressionMessage::deserializeAs_AlignmentWarEffortProgressionMessage(ICustomDataInput &input) {
    AlignmentWarEffortInformation _item1;
    unsigned int _effortProgressionsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _effortProgressionsLen; _i1++) {
        _item1.deserialize(input);
        this->effortProgressions.push_back(_item1);
    }
}

void AlignmentWarEffortProgressionMessage::_effortProgressionsFunc(ICustomDataInput &input) {
    AlignmentWarEffortInformation _item;
    _item.deserialize(input);
    this->effortProgressions.push_back(_item);
}

