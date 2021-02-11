#include "PartyFollowMemberRequestMessage.h"

void PartyFollowMemberRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyFollowMemberRequestMessage(input);
}

void PartyFollowMemberRequestMessage::deserializeAs_PartyFollowMemberRequestMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void PartyFollowMemberRequestMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

