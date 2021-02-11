#include "PartyInvitationDungeonRequestMessage.h"

void PartyInvitationDungeonRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationDungeonRequestMessage(input);
}

void PartyInvitationDungeonRequestMessage::deserializeAs_PartyInvitationDungeonRequestMessage(ICustomDataInput &input) {
    PartyInvitationRequestMessage::deserialize(input);
    this->_dungeonIdFunc(input);
}

void PartyInvitationDungeonRequestMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

