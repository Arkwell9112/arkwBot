#include "PartyAbdicateThroneMessage.h"

void PartyAbdicateThroneMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyAbdicateThroneMessage(input);
}

void PartyAbdicateThroneMessage::deserializeAs_PartyAbdicateThroneMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void PartyAbdicateThroneMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

