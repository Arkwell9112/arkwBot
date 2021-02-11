#include "JobCrafterDirectoryListMessage.h"

void JobCrafterDirectoryListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryListMessage(input);
}

void JobCrafterDirectoryListMessage::deserializeAs_JobCrafterDirectoryListMessage(ICustomDataInput &input) {
    JobCrafterDirectoryListEntry _item1;
    unsigned int _listEntriesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _listEntriesLen; _i1++) {
        _item1.deserialize(input);
        this->listEntries.push_back(_item1);
    }
}

void JobCrafterDirectoryListMessage::_listEntriesFunc(ICustomDataInput &input) {
    JobCrafterDirectoryListEntry _item;
    _item.deserialize(input);
    this->listEntries.push_back(_item);
}

