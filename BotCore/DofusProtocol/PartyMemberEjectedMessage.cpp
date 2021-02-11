#include "PartyMemberEjectedMessage.h"

void PartyMemberEjectedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyMemberEjectedMessage(input);
}

void PartyMemberEjectedMessage::deserializeAs_PartyMemberEjectedMessage(ICustomDataInput &input) {
    PartyMemberRemoveMessage::deserialize(input);
    this->_kickerIdFunc(input);
}

void PartyMemberEjectedMessage::_kickerIdFunc(ICustomDataInput &input) {
    this->kickerId = input.readVarUhLong();

}

