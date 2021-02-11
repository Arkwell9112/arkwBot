#include "PartyNameSetRequestMessage.h"

void PartyNameSetRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyNameSetRequestMessage(input);
}

void PartyNameSetRequestMessage::deserializeAs_PartyNameSetRequestMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_partyNameFunc(input);
}

void PartyNameSetRequestMessage::_partyNameFunc(ICustomDataInput &input) {
    this->partyName = input.readUTF();
}

