#include "GuildCharacsUpgradeRequestMessage.h"

void GuildCharacsUpgradeRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildCharacsUpgradeRequestMessage(input);
}

void GuildCharacsUpgradeRequestMessage::deserializeAs_GuildCharacsUpgradeRequestMessage(ICustomDataInput &input) {
    this->_charaTypeTargetFunc(input);
}

void GuildCharacsUpgradeRequestMessage::_charaTypeTargetFunc(ICustomDataInput &input) {
    this->charaTypeTarget = input.readByte();

}

