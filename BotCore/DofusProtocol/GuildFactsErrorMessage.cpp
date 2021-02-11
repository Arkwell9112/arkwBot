#include "GuildFactsErrorMessage.h"

void GuildFactsErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFactsErrorMessage(input);
}

void GuildFactsErrorMessage::deserializeAs_GuildFactsErrorMessage(ICustomDataInput &input) {
    this->_guildIdFunc(input);
}

void GuildFactsErrorMessage::_guildIdFunc(ICustomDataInput &input) {
    this->guildId = input.readVarUhInt();

}

