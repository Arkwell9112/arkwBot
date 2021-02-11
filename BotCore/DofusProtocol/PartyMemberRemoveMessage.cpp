#include "PartyMemberRemoveMessage.h"

void PartyMemberRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyMemberRemoveMessage(input);
}

void PartyMemberRemoveMessage::deserializeAs_PartyMemberRemoveMessage(ICustomDataInput &input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_leavingPlayerIdFunc(input);
}

void PartyMemberRemoveMessage::_leavingPlayerIdFunc(ICustomDataInput &input) {
    this->leavingPlayerId = input.readVarUhLong();

}

