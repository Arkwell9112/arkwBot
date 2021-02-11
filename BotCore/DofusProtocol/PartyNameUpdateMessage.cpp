#include "PartyNameUpdateMessage.h"

void PartyNameUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyNameUpdateMessage(input);
}

void PartyNameUpdateMessage::deserializeAs_PartyNameUpdateMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_partyNameFunc(input);
}

void PartyNameUpdateMessage::_partyNameFunc(ICustomDataInput &input) {
    this->partyName = input.readUTF();
}

