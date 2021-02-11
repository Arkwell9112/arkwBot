#include "AllianceBulletinMessage.h"

void AllianceBulletinMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceBulletinMessage(input);
}

void AllianceBulletinMessage::deserializeAs_AllianceBulletinMessage(ICustomDataInput &input) {
    BulletinMessage::deserialize(input);
}

