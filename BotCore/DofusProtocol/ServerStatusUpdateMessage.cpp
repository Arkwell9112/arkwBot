#include "ServerStatusUpdateMessage.h"

void ServerStatusUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerStatusUpdateMessage(input);
}

void ServerStatusUpdateMessage::deserializeAs_ServerStatusUpdateMessage(ICustomDataInput &input) {
    this->server.deserialize(input);
}

