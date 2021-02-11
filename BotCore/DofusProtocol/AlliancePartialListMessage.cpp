#include "AlliancePartialListMessage.h"

void AlliancePartialListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlliancePartialListMessage(input);
}

void AlliancePartialListMessage::deserializeAs_AlliancePartialListMessage(ICustomDataInput &input) {
    AllianceListMessage::deserialize(input);
}

