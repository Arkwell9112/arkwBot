#include "SelectedServerDataMessage.h"

void SelectedServerDataMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SelectedServerDataMessage(input);
}

void SelectedServerDataMessage::deserializeAs_SelectedServerDataMessage(ICustomDataInput &input) {
    unsigned int _val3 = 0;
    int _val5 = 0;
    this->_serverIdFunc(input);
    this->_addressFunc(input);
    unsigned int _portsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _portsLen; _i3++) {
        _val3 = input.readVarUhShort();

        this->ports.push_back(_val3);
    }
    this->_canCreateNewCharacterFunc(input);
    unsigned int _ticketLen = input.readVarInt();
    for (unsigned int _i5 = 0; _i5 < _ticketLen; _i5++) {
        _val5 = input.readByte();
        this->ticket.push_back(_val5);
    }
}

void SelectedServerDataMessage::_serverIdFunc(ICustomDataInput &input) {
    this->serverId = input.readVarUhShort();

}

void SelectedServerDataMessage::_addressFunc(ICustomDataInput &input) {
    this->address = input.readUTF();
}

void SelectedServerDataMessage::_portsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->ports.push_back(_val);
}

void SelectedServerDataMessage::_canCreateNewCharacterFunc(ICustomDataInput &input) {
    this->canCreateNewCharacter = input.readBoolean();
}

void SelectedServerDataMessage::_ticketFunc(ICustomDataInput &input) {
    int _val = input.readByte();
    this->ticket.push_back(_val);
}

