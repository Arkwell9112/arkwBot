#include "JobExperienceMultiUpdateMessage.h"

void JobExperienceMultiUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobExperienceMultiUpdateMessage(input);
}

void JobExperienceMultiUpdateMessage::deserializeAs_JobExperienceMultiUpdateMessage(ICustomDataInput &input) {
    JobExperience _item1;
    unsigned int _experiencesUpdateLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _experiencesUpdateLen; _i1++) {
        _item1.deserialize(input);
        this->experiencesUpdate.push_back(_item1);
    }
}

void JobExperienceMultiUpdateMessage::_experiencesUpdateFunc(ICustomDataInput &input) {
    JobExperience _item;
    _item.deserialize(input);
    this->experiencesUpdate.push_back(_item);
}

