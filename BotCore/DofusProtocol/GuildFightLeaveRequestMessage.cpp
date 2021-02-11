#include "GuildFightLeaveRequestMessage.h"

void GuildFightLeaveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildFightLeaveRequestMessage(input);
}

void GuildFightLeaveRequestMessage::deserializeAs_GuildFightLeaveRequestMessage(ICustomDataInput &input) {
    this->_taxCollectorIdFunc(input);
    this->_characterIdFunc(input);
}

void GuildFightLeaveRequestMessage::_taxCollectorIdFunc(ICustomDataInput &input) {
    this->taxCollectorId = input.readDouble();

}

void GuildFightLeaveRequestMessage::_characterIdFunc(ICustomDataInput &input) {
    this->characterId = input.readVarUhLong();

}

