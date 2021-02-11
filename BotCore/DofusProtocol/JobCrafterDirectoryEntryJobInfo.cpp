#include "JobCrafterDirectoryEntryJobInfo.h"

void JobCrafterDirectoryEntryJobInfo::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryEntryJobInfo(input);
}

void JobCrafterDirectoryEntryJobInfo::deserializeAs_JobCrafterDirectoryEntryJobInfo(ICustomDataInput &input) {
    this->_jobIdFunc(input);
    this->_jobLevelFunc(input);
    this->_freeFunc(input);
    this->_minLevelFunc(input);
}

void JobCrafterDirectoryEntryJobInfo::_jobIdFunc(ICustomDataInput &input) {
    this->jobId = input.readByte();

}

void JobCrafterDirectoryEntryJobInfo::_jobLevelFunc(ICustomDataInput &input) {
    this->jobLevel = input.readUnsignedByte();

}

void JobCrafterDirectoryEntryJobInfo::_freeFunc(ICustomDataInput &input) {
    this->free = input.readBoolean();
}

void JobCrafterDirectoryEntryJobInfo::_minLevelFunc(ICustomDataInput &input) {
    this->minLevel = input.readUnsignedByte();

}

