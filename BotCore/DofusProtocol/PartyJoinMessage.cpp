#include "../ProtocolTypeManager.h"
#include "PartyJoinMessage.h"

void PartyJoinMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyJoinMessage(input);
}

void PartyJoinMessage::deserializeAs_PartyJoinMessage(ICustomDataInput &input) {
    unsigned int _id4 = 0;
    PartyMemberInformations _item4;
    PartyGuestInformations _item5;
    AbstractPartyMessage::deserialize(input);
    this->_partyTypeFunc(input);
    this->_partyLeaderIdFunc(input);
    this->_maxParticipantsFunc(input);
    unsigned int _membersLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _membersLen; _i4++) {
        _id4 = input.readUnsignedShort();
        _item4 = ProtocolTypeManager::getObject<PartyMemberInformations>(input, _id4);
        this->members.push_back(_item4);
    }
    unsigned int _guestsLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _guestsLen; _i5++) {
        _item5.deserialize(input);
        this->guests.push_back(_item5);
    }
    this->_restrictedFunc(input);
    this->_partyNameFunc(input);
}

void PartyJoinMessage::_partyTypeFunc(ICustomDataInput &input) {
    this->partyType = input.readByte();

}

void PartyJoinMessage::_partyLeaderIdFunc(ICustomDataInput &input) {
    this->partyLeaderId = input.readVarUhLong();

}

void PartyJoinMessage::_maxParticipantsFunc(ICustomDataInput &input) {
    this->maxParticipants = input.readByte();

}

void PartyJoinMessage::_membersFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    PartyMemberInformations _item = ProtocolTypeManager::getObject<PartyMemberInformations>(input, _id);
    _item.deserialize(input);
    this->members.push_back(_item);
}

void PartyJoinMessage::_guestsFunc(ICustomDataInput &input) {
    PartyGuestInformations _item;
    _item.deserialize(input);
    this->guests.push_back(_item);
}

void PartyJoinMessage::_restrictedFunc(ICustomDataInput &input) {
    this->restricted = input.readBoolean();
}

void PartyJoinMessage::_partyNameFunc(ICustomDataInput &input) {
    this->partyName = input.readUTF();
}

