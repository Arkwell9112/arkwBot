#include "PartyKickedByMessage.h"

void PartyKickedByMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyKickedByMessage(input);
}

void PartyKickedByMessage::deserializeAs_PartyKickedByMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_kickerIdFunc(input);
}

void PartyKickedByMessage::_kickerIdFunc(ICustomDataInput &input) {
    this->kickerId = input.readVarUhLong();

}

