#include "JobCrafterDirectoryDefineSettingsMessage.h"

void JobCrafterDirectoryDefineSettingsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobCrafterDirectoryDefineSettingsMessage(input);
}

void JobCrafterDirectoryDefineSettingsMessage::deserializeAs_JobCrafterDirectoryDefineSettingsMessage(
        ICustomDataInput &input) {
    this->settings.deserialize(input);
}

