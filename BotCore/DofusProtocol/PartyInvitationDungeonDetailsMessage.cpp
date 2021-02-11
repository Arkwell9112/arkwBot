#include "PartyInvitationDungeonDetailsMessage.h"

void PartyInvitationDungeonDetailsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationDungeonDetailsMessage(input);
}

void PartyInvitationDungeonDetailsMessage::deserializeAs_PartyInvitationDungeonDetailsMessage(ICustomDataInput &input) {
    bool _val2 = false;
    PartyInvitationDetailsMessage::deserialize(input);
    this->_dungeonIdFunc(input);
    unsigned int _playersDungeonReadyLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _playersDungeonReadyLen; _i2++) {
        _val2 = input.readBoolean();
        this->playersDungeonReady.push_back(_val2);
    }
}

void PartyInvitationDungeonDetailsMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

void PartyInvitationDungeonDetailsMessage::_playersDungeonReadyFunc(ICustomDataInput &input) {
    bool _val = input.readBoolean();
    this->playersDungeonReady.push_back(_val);
}

