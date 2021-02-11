#include "BulletinMessage.h"

void BulletinMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BulletinMessage(input);
}

void BulletinMessage::deserializeAs_BulletinMessage(ICustomDataInput &input) {
    SocialNoticeMessage::deserialize(input);
    this->_lastNotifiedTimestampFunc(input);
}

void BulletinMessage::_lastNotifiedTimestampFunc(ICustomDataInput &input) {
    this->lastNotifiedTimestamp = input.readInt();

}

