#include "AllianceBulletinSetErrorMessage.h"

void AllianceBulletinSetErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceBulletinSetErrorMessage(input);
}

void AllianceBulletinSetErrorMessage::deserializeAs_AllianceBulletinSetErrorMessage(ICustomDataInput &input) {
    SocialNoticeSetErrorMessage::deserialize(input);
}

