#include "JobCrafterDirectorySettings.h"

void JobCrafterDirectorySettings::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectorySettings(input);
}

void JobCrafterDirectorySettings::deserializeAs_JobCrafterDirectorySettings(ICustomDataInput &input) {
    this->_jobIdFunc(input);
    this->_minLevelFunc(input);
    this->_freeFunc(input);
}

void JobCrafterDirectorySettings::_jobIdFunc(ICustomDataInput &input) {
    this->jobId = input.readByte();

}

void JobCrafterDirectorySettings::_minLevelFunc(ICustomDataInput &input) {
    this->minLevel = input.readUnsignedByte();

}

void JobCrafterDirectorySettings::_freeFunc(ICustomDataInput &input) {
    this->free = input.readBoolean();
}

