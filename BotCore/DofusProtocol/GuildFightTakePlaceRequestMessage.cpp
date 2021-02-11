#include "GuildFightTakePlaceRequestMessage.h"

void GuildFightTakePlaceRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFightTakePlaceRequestMessage(input);
}

void GuildFightTakePlaceRequestMessage::deserializeAs_GuildFightTakePlaceRequestMessage(ICustomDataInput &input) {
    GuildFightJoinRequestMessage::deserialize(input);
    this->_replacedCharacterIdFunc(input);
}

void GuildFightTakePlaceRequestMessage::_replacedCharacterIdFunc(ICustomDataInput &input) {
    this->replacedCharacterId = input.readInt();
}

