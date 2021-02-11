#include "GuildLevelUpMessage.h"

void GuildLevelUpMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildLevelUpMessage(input);
}

void GuildLevelUpMessage::deserializeAs_GuildLevelUpMessage(ICustomDataInput &input) {
    this->_newLevelFunc(input);
}

void GuildLevelUpMessage::_newLevelFunc(ICustomDataInput &input) {
    this->newLevel = input.readUnsignedByte();

}

