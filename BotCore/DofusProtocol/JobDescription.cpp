#include "../ProtocolTypeManager.h"
#include "JobDescription.h"

void JobDescription::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobDescription(input);
}

void JobDescription::deserializeAs_JobDescription(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    SkillActionDescription _item2;
    this->_jobIdFunc(input);
    unsigned int _skillsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _skillsLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<SkillActionDescription>(input, _id2);
        this->skills.push_back(_item2);
    }
}

void JobDescription::_jobIdFunc(ICustomDataInput &input) {
    this->jobId = input.readByte();

}

void JobDescription::_skillsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    SkillActionDescription _item = ProtocolTypeManager::getObject<SkillActionDescription>(input, _id);
    _item.deserialize(input);
    this->skills.push_back(_item);
}

