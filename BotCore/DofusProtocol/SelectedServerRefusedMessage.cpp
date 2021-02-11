#include "SelectedServerRefusedMessage.h"

void SelectedServerRefusedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SelectedServerRefusedMessage(input);
}

void SelectedServerRefusedMessage::deserializeAs_SelectedServerRefusedMessage(ICustomDataInput &input) {
    this->_serverIdFunc(input);
    this->_errorFunc(input);
    this->_serverStatusFunc(input);
}

void SelectedServerRefusedMessage::_serverIdFunc(ICustomDataInput &input) {
    this->serverId = input.readVarUhShort();

}

void SelectedServerRefusedMessage::_errorFunc(ICustomDataInput &input) {
    this->error = input.readByte();

}

void SelectedServerRefusedMessage::_serverStatusFunc(ICustomDataInput &input) {
    this->serverStatus = input.readByte();

}

