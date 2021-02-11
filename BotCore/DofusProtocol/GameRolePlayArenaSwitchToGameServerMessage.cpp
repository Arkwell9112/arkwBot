#include "GameRolePlayArenaSwitchToGameServerMessage.h"

void GameRolePlayArenaSwitchToGameServerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaSwitchToGameServerMessage(input);
}

void GameRolePlayArenaSwitchToGameServerMessage::deserializeAs_GameRolePlayArenaSwitchToGameServerMessage(
        ICustomDataInput &input) {
    int _val2 = 0;
    this->_validTokenFunc(input);
    unsigned int _ticketLen = input.readVarInt();
    for (unsigned int _i2 = 0; _i2 < _ticketLen; _i2++) {
        _val2 = input.readByte();
        this->ticket.push_back(_val2);
    }
    this->_homeServerIdFunc(input);
}

void GameRolePlayArenaSwitchToGameServerMessage::_validTokenFunc(ICustomDataInput &input) {
    this->validToken = input.readBoolean();
}

void GameRolePlayArenaSwitchToGameServerMessage::_ticketFunc(ICustomDataInput &input) {
    int _val = input.readByte();
    this->ticket.push_back(_val);
}

void GameRolePlayArenaSwitchToGameServerMessage::_homeServerIdFunc(ICustomDataInput &input) {
    this->homeServerId = input.readShort();
}

