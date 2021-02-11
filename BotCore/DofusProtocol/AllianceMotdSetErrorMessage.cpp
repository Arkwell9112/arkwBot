#include "AllianceMotdSetErrorMessage.h"

void AllianceMotdSetErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceMotdSetErrorMessage(input);
}

void AllianceMotdSetErrorMessage::deserializeAs_AllianceMotdSetErrorMessage(ICustomDataInput &input) {
    SocialNoticeSetErrorMessage::deserialize(input);
}

