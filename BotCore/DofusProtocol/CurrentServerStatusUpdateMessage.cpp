#include "CurrentServerStatusUpdateMessage.h"

void CurrentServerStatusUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CurrentServerStatusUpdateMessage(input);
}

void CurrentServerStatusUpdateMessage::deserializeAs_CurrentServerStatusUpdateMessage(ICustomDataInput &input) {
    this->_statusFunc(input);
}

void CurrentServerStatusUpdateMessage::_statusFunc(ICustomDataInput &input) {
    this->status = input.readByte();

}

