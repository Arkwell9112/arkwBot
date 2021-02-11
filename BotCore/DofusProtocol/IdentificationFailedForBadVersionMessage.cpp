#include "IdentificationFailedForBadVersionMessage.h"

void IdentificationFailedForBadVersionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdentificationFailedForBadVersionMessage(input);
}

void IdentificationFailedForBadVersionMessage::deserializeAs_IdentificationFailedForBadVersionMessage(
        ICustomDataInput &input) {
    IdentificationFailedMessage::deserialize(input);
    this->requiredVersion.deserialize(input);
}

