#include "JobLevelUpMessage.h"

void JobLevelUpMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobLevelUpMessage(input);
}

void JobLevelUpMessage::deserializeAs_JobLevelUpMessage(ICustomDataInput &input) {
    this->_newLevelFunc(input);
    this->jobsDescription.deserialize(input);
}

void JobLevelUpMessage::_newLevelFunc(ICustomDataInput &input) {
    this->newLevel = input.readUnsignedByte();

}

