#include "PartyInvitationMessage.h"

void PartyInvitationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationMessage(input);
}

void PartyInvitationMessage::deserializeAs_PartyInvitationMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_partyTypeFunc(input);
    this->_partyNameFunc(input);
    this->_maxParticipantsFunc(input);
    this->_fromIdFunc(input);
    this->_fromNameFunc(input);
    this->_toIdFunc(input);
}

void PartyInvitationMessage::_partyTypeFunc(ICustomDataInput &input) {
    this->partyType = input.readByte();

}

void PartyInvitationMessage::_partyNameFunc(ICustomDataInput &input) {
    this->partyName = input.readUTF();
}

void PartyInvitationMessage::_maxParticipantsFunc(ICustomDataInput &input) {
    this->maxParticipants = input.readByte();

}

void PartyInvitationMessage::_fromIdFunc(ICustomDataInput &input) {
    this->fromId = input.readVarUhLong();

}

void PartyInvitationMessage::_fromNameFunc(ICustomDataInput &input) {
    this->fromName = input.readUTF();
}

void PartyInvitationMessage::_toIdFunc(ICustomDataInput &input) {
    this->toId = input.readVarUhLong();

}

