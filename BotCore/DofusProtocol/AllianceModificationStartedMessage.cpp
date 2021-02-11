#include "../IO/BooleanByteWrapper.h"
#include "AllianceModificationStartedMessage.h"

void AllianceModificationStartedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceModificationStartedMessage(input);
}

void AllianceModificationStartedMessage::deserializeAs_AllianceModificationStartedMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
}

void AllianceModificationStartedMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->canChangeName = BooleanByteWrapper::getFlag(_box0, 0);
    this->canChangeTag = BooleanByteWrapper::getFlag(_box0, 1);
    this->canChangeEmblem = BooleanByteWrapper::getFlag(_box0, 2);
}

