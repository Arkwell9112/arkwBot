#include "AllianceMotdMessage.h"

void AllianceMotdMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceMotdMessage(input);
}

void AllianceMotdMessage::deserializeAs_AllianceMotdMessage(ICustomDataInput &input) {
    SocialNoticeMessage::deserialize(input);
}

