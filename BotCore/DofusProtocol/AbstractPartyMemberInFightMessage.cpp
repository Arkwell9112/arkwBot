#include "AbstractPartyMemberInFightMessage.h"

void AbstractPartyMemberInFightMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractPartyMemberInFightMessage(input);
}

void AbstractPartyMemberInFightMessage::deserializeAs_AbstractPartyMemberInFightMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_reasonFunc(input);
    this->_memberIdFunc(input);
    this->_memberAccountIdFunc(input);
    this->_memberNameFunc(input);
    this->_fightIdFunc(input);
    this->_timeBeforeFightStartFunc(input);
}

void AbstractPartyMemberInFightMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

void AbstractPartyMemberInFightMessage::_memberIdFunc(ICustomDataInput &input) {
    this->memberId = input.readVarUhLong();

}

void AbstractPartyMemberInFightMessage::_memberAccountIdFunc(ICustomDataInput &input) {
    this->memberAccountId = input.readInt();

}

void AbstractPartyMemberInFightMessage::_memberNameFunc(ICustomDataInput &input) {
    this->memberName = input.readUTF();
}

void AbstractPartyMemberInFightMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void AbstractPartyMemberInFightMessage::_timeBeforeFightStartFunc(ICustomDataInput &input) {
    this->timeBeforeFightStart = input.readVarShort();
}

