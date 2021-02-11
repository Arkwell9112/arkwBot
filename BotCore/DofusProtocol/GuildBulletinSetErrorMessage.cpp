#include "GuildBulletinSetErrorMessage.h"

void GuildBulletinSetErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildBulletinSetErrorMessage(input);
}

void GuildBulletinSetErrorMessage::deserializeAs_GuildBulletinSetErrorMessage(ICustomDataInput &input) {
    SocialNoticeSetErrorMessage::deserialize(input);
}

