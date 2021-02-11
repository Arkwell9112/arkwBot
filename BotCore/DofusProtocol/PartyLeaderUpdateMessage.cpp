#include "PartyLeaderUpdateMessage.h"

void PartyLeaderUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyLeaderUpdateMessage(input);
}

void PartyLeaderUpdateMessage::deserializeAs_PartyLeaderUpdateMessage(ICustomDataInput &input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_partyLeaderIdFunc(input);
}

void PartyLeaderUpdateMessage::_partyLeaderIdFunc(ICustomDataInput &input) {
    this->partyLeaderId = input.readVarUhLong();

}

