#include "JobExperience.h"

void JobExperience::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobExperience(input);
}

void JobExperience::deserializeAs_JobExperience(ICustomDataInput &input) {
    this->_jobIdFunc(input);
    this->_jobLevelFunc(input);
    this->_jobXPFunc(input);
    this->_jobXpLevelFloorFunc(input);
    this->_jobXpNextLevelFloorFunc(input);
}

void JobExperience::_jobIdFunc(ICustomDataInput &input) {
    this->jobId = input.readByte();

}

void JobExperience::_jobLevelFunc(ICustomDataInput &input) {
    this->jobLevel = input.readUnsignedByte();

}

void JobExperience::_jobXPFunc(ICustomDataInput &input) {
    this->jobXP = input.readVarUhLong();

}

void JobExperience::_jobXpLevelFloorFunc(ICustomDataInput &input) {
    this->jobXpLevelFloor = input.readVarUhLong();

}

void JobExperience::_jobXpNextLevelFloorFunc(ICustomDataInput &input) {
    this->jobXpNextLevelFloor = input.readVarUhLong();

}

