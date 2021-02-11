#include "../ProtocolTypeManager.h"
#include "PartyInvitationDetailsMessage.h"

void PartyInvitationDetailsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationDetailsMessage(input);
}

void PartyInvitationDetailsMessage::deserializeAs_PartyInvitationDetailsMessage(ICustomDataInput &input) {
    unsigned int _id6 = 0;
    PartyInvitationMemberInformations _item6;
    PartyGuestInformations _item7;
    AbstractPartyMessage::deserialize(input);
    this->_partyTypeFunc(input);
    this->_partyNameFunc(input);
    this->_fromIdFunc(input);
    this->_fromNameFunc(input);
    this->_leaderIdFunc(input);
    unsigned int _membersLen = input.readUnsignedShort();
    for (unsigned int _i6 = 0; _i6 < _membersLen; _i6++) {
        _id6 = input.readUnsignedShort();
        _item6 = ProtocolTypeManager::getObject<PartyInvitationMemberInformations>(input, _id6);
        this->members.push_back(_item6);
    }
    unsigned int _guestsLen = input.readUnsignedShort();
    for (unsigned int _i7 = 0; _i7 < _guestsLen; _i7++) {
        _item7.deserialize(input);
        this->guests.push_back(_item7);
    }
}

void PartyInvitationDetailsMessage::_partyTypeFunc(ICustomDataInput &input) {
    this->partyType = input.readByte();

}

void PartyInvitationDetailsMessage::_partyNameFunc(ICustomDataInput &input) {
    this->partyName = input.readUTF();
}

void PartyInvitationDetailsMessage::_fromIdFunc(ICustomDataInput &input) {
    this->fromId = input.readVarUhLong();

}

void PartyInvitationDetailsMessage::_fromNameFunc(ICustomDataInput &input) {
    this->fromName = input.readUTF();
}

void PartyInvitationDetailsMessage::_leaderIdFunc(ICustomDataInput &input) {
    this->leaderId = input.readVarUhLong();

}

void PartyInvitationDetailsMessage::_membersFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    PartyInvitationMemberInformations _item = ProtocolTypeManager::getObject<PartyInvitationMemberInformations>(input,
                                                                                                                _id);
    _item.deserialize(input);
    this->members.push_back(_item);
}

void PartyInvitationDetailsMessage::_guestsFunc(ICustomDataInput &input) {
    PartyGuestInformations _item;
    _item.deserialize(input);
    this->guests.push_back(_item);
}

