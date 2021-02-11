#include "GameRolePlayArenaSwitchToFightServerMessage.h"

void GameRolePlayArenaSwitchToFightServerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaSwitchToFightServerMessage(input);
}

void GameRolePlayArenaSwitchToFightServerMessage::deserializeAs_GameRolePlayArenaSwitchToFightServerMessage(
        ICustomDataInput &input) {
    unsigned int _val2 = 0;
    int _val3 = 0;
    this->_addressFunc(input);
    unsigned int _portsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _portsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->ports.push_back(_val2);
    }
    unsigned int _ticketLen = input.readVarInt();
    for (unsigned int _i3 = 0; _i3 < _ticketLen; _i3++) {
        _val3 = input.readByte();
        this->ticket.push_back(_val3);
    }
}

void GameRolePlayArenaSwitchToFightServerMessage::_addressFunc(ICustomDataInput &input) {
    this->address = input.readUTF();
}

void GameRolePlayArenaSwitchToFightServerMessage::_portsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->ports.push_back(_val);
}

void GameRolePlayArenaSwitchToFightServerMessage::_ticketFunc(ICustomDataInput &input) {
    int _val = input.readByte();
    this->ticket.push_back(_val);
}

