#include "../IO/BooleanByteWrapper.h"
#include "GuildModificationStartedMessage.h"

void GuildModificationStartedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildModificationStartedMessage(input);
}

void GuildModificationStartedMessage::deserializeAs_GuildModificationStartedMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
}

void GuildModificationStartedMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->canChangeName = BooleanByteWrapper::getFlag(_box0, 0);
    this->canChangeEmblem = BooleanByteWrapper::getFlag(_box0, 1);
}

