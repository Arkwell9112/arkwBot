#include "JobCrafterDirectoryEntryMessage.h"

void JobCrafterDirectoryEntryMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryEntryMessage(input);
}

void JobCrafterDirectoryEntryMessage::deserializeAs_JobCrafterDirectoryEntryMessage(ICustomDataInput &input) {
    JobCrafterDirectoryEntryJobInfo _item2;
    this->playerInfo.deserialize(input);
    unsigned int _jobInfoListLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _jobInfoListLen; _i2++) {
        _item2.deserialize(input);
        this->jobInfoList.push_back(_item2);
    }
    this->playerLook.deserialize(input);
}

void JobCrafterDirectoryEntryMessage::_jobInfoListFunc(ICustomDataInput &input) {
    JobCrafterDirectoryEntryJobInfo _item;
    _item.deserialize(input);
    this->jobInfoList.push_back(_item);
}

