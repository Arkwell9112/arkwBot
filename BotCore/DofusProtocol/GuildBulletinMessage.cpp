#include "GuildBulletinMessage.h"

void GuildBulletinMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildBulletinMessage(input);
}

void GuildBulletinMessage::deserializeAs_GuildBulletinMessage(ICustomDataInput &input) {
    BulletinMessage::deserialize(input);
}

