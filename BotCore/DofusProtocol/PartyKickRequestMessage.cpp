#include "PartyKickRequestMessage.h"

void PartyKickRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyKickRequestMessage(input);
}

void PartyKickRequestMessage::deserializeAs_PartyKickRequestMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void PartyKickRequestMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

