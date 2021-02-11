#include "AllianceChangeGuildRightsMessage.h"

void AllianceChangeGuildRightsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceChangeGuildRightsMessage(input);
}

void AllianceChangeGuildRightsMessage::deserializeAs_AllianceChangeGuildRightsMessage(ICustomDataInput &input) {
    this->_guildIdFunc(input);
    this->_rightsFunc(input);
}

void AllianceChangeGuildRightsMessage::_guildIdFunc(ICustomDataInput &input) {
    this->guildId = input.readVarUhInt();

}

void AllianceChangeGuildRightsMessage::_rightsFunc(ICustomDataInput &input) {
    this->rights = input.readByte();

}

