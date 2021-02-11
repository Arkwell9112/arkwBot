#include "PartyInvitationDungeonMessage.h"

void PartyInvitationDungeonMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationDungeonMessage(input);
}

void PartyInvitationDungeonMessage::deserializeAs_PartyInvitationDungeonMessage(ICustomDataInput &input) {
    PartyInvitationMessage::deserialize(input);
    this->_dungeonIdFunc(input);
}

void PartyInvitationDungeonMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

