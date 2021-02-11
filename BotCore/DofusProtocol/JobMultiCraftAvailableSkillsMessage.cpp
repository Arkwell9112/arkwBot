#include "JobMultiCraftAvailableSkillsMessage.h"

void JobMultiCraftAvailableSkillsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobMultiCraftAvailableSkillsMessage(input);
}

void JobMultiCraftAvailableSkillsMessage::deserializeAs_JobMultiCraftAvailableSkillsMessage(ICustomDataInput &input) {
    unsigned int _val2 = 0;
    JobAllowMultiCraftRequestMessage::deserialize(input);
    this->_playerIdFunc(input);
    unsigned int _skillsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _skillsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->skills.push_back(_val2);
    }
}

void JobMultiCraftAvailableSkillsMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void JobMultiCraftAvailableSkillsMessage::_skillsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->skills.push_back(_val);
}

