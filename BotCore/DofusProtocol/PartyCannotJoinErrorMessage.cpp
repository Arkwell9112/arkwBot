#include "PartyCannotJoinErrorMessage.h"

void PartyCannotJoinErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyCannotJoinErrorMessage(input);
}

void PartyCannotJoinErrorMessage::deserializeAs_PartyCannotJoinErrorMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_reasonFunc(input);
}

void PartyCannotJoinErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

