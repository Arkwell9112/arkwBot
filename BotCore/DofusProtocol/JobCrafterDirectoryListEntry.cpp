#include "JobCrafterDirectoryListEntry.h"

void JobCrafterDirectoryListEntry::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryListEntry(input);
}

void JobCrafterDirectoryListEntry::deserializeAs_JobCrafterDirectoryListEntry(ICustomDataInput &input) {
    this->playerInfo.deserialize(input);
    this->jobInfo.deserialize(input);
}

