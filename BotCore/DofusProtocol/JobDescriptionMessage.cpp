#include "JobDescriptionMessage.h"

void JobDescriptionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobDescriptionMessage(input);
}

void JobDescriptionMessage::deserializeAs_JobDescriptionMessage(ICustomDataInput &input) {
    JobDescription _item1;
    unsigned int _jobsDescriptionLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _jobsDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->jobsDescription.push_back(_item1);
    }
}

void JobDescriptionMessage::_jobsDescriptionFunc(ICustomDataInput &input) {
    JobDescription _item;
    _item.deserialize(input);
    this->jobsDescription.push_back(_item);
}

