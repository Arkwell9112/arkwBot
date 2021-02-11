#include "AllianceGuildLeavingMessage.h"

void AllianceGuildLeavingMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceGuildLeavingMessage(input);
}

void AllianceGuildLeavingMessage::deserializeAs_AllianceGuildLeavingMessage(ICustomDataInput &input) {
    this->_kickedFunc(input);
    this->_guildIdFunc(input);
}

void AllianceGuildLeavingMessage::_kickedFunc(ICustomDataInput &input) {
    this->kicked = input.readBoolean();
}

void AllianceGuildLeavingMessage::_guildIdFunc(ICustomDataInput &input) {
    this->guildId = input.readVarUhInt();

}

