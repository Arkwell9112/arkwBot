#include "GuildFactsRequestMessage.h"

void GuildFactsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFactsRequestMessage(input);
}

void GuildFactsRequestMessage::deserializeAs_GuildFactsRequestMessage(ICustomDataInput &input) {
    this->_guildIdFunc(input);
}

void GuildFactsRequestMessage::_guildIdFunc(ICustomDataInput &input) {
    this->guildId = input.readVarUhInt();

}

