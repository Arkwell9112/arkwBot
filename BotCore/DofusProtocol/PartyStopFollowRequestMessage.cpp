#include "PartyStopFollowRequestMessage.h"

void PartyStopFollowRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyStopFollowRequestMessage(input);
}

void PartyStopFollowRequestMessage::deserializeAs_PartyStopFollowRequestMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void PartyStopFollowRequestMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

