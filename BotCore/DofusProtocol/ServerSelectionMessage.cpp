#include "ServerSelectionMessage.h"

void ServerSelectionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerSelectionMessage(input);
}

void ServerSelectionMessage::deserializeAs_ServerSelectionMessage(ICustomDataInput &input) {
    this->_serverIdFunc(input);
}

void ServerSelectionMessage::_serverIdFunc(ICustomDataInput &input) {
    this->serverId = input.readVarUhShort();

}

