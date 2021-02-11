#include "JobCrafterDirectoryListRequestMessage.h"

void JobCrafterDirectoryListRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryListRequestMessage(input);
}

void
JobCrafterDirectoryListRequestMessage::deserializeAs_JobCrafterDirectoryListRequestMessage(ICustomDataInput &input) {
    this->_jobIdFunc(input);
}

void JobCrafterDirectoryListRequestMessage::_jobIdFunc(ICustomDataInput &input) {
    this->jobId = input.readByte();

}

