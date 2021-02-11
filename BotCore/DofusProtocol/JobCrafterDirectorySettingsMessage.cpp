#include "JobCrafterDirectorySettingsMessage.h"

void JobCrafterDirectorySettingsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectorySettingsMessage(input);
}

void JobCrafterDirectorySettingsMessage::deserializeAs_JobCrafterDirectorySettingsMessage(ICustomDataInput &input) {
    JobCrafterDirectorySettings _item1;
    unsigned int _craftersSettingsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _craftersSettingsLen; _i1++) {
        _item1.deserialize(input);
        this->craftersSettings.push_back(_item1);
    }
}

void JobCrafterDirectorySettingsMessage::_craftersSettingsFunc(ICustomDataInput &input) {
    JobCrafterDirectorySettings _item;
    _item.deserialize(input);
    this->craftersSettings.push_back(_item);
}

