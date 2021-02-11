#include "JobCrafterDirectoryAddMessage.h"

void JobCrafterDirectoryAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryAddMessage(input);
}

void JobCrafterDirectoryAddMessage::deserializeAs_JobCrafterDirectoryAddMessage(ICustomDataInput &input) {
    this->listEntry.deserialize(input);
}

