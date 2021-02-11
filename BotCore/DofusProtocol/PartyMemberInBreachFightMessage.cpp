#include "PartyMemberInBreachFightMessage.h"

void PartyMemberInBreachFightMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyMemberInBreachFightMessage(input);
}

void PartyMemberInBreachFightMessage::deserializeAs_PartyMemberInBreachFightMessage(ICustomDataInput &input) {
    AbstractPartyMemberInFightMessage::deserialize(input);
    this->_floorFunc(input);
    this->_roomFunc(input);
}

void PartyMemberInBreachFightMessage::_floorFunc(ICustomDataInput &input) {
    this->floor = input.readVarUhInt();

}

void PartyMemberInBreachFightMessage::_roomFunc(ICustomDataInput &input) {
    this->room = input.readByte();

}

