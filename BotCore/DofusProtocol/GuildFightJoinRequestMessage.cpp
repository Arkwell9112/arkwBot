#include "GuildFightJoinRequestMessage.h"

void GuildFightJoinRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFightJoinRequestMessage(input);
}

void GuildFightJoinRequestMessage::deserializeAs_GuildFightJoinRequestMessage(ICustomDataInput &input) {
    this->_taxCollectorIdFunc(input);
}

void GuildFightJoinRequestMessage::_taxCollectorIdFunc(ICustomDataInput &input) {
    this->taxCollectorId = input.readDouble();

}

