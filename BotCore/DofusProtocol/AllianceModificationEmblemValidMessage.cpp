#include "AllianceModificationEmblemValidMessage.h"

void AllianceModificationEmblemValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceModificationEmblemValidMessage(input);
}

void
AllianceModificationEmblemValidMessage::deserializeAs_AllianceModificationEmblemValidMessage(ICustomDataInput &input) {
    this->Alliancemblem.deserialize(input);
}

