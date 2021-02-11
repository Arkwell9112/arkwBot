#include "LoginQueueStatusMessage.h"

void LoginQueueStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LoginQueueStatusMessage(input);
}

void LoginQueueStatusMessage::deserializeAs_LoginQueueStatusMessage(ICustomDataInput &input) {
    this->_positionFunc(input);
    this->_totalFunc(input);
}

void LoginQueueStatusMessage::_positionFunc(ICustomDataInput &input) {
    this->position = input.readUnsignedShort();

}

void LoginQueueStatusMessage::_totalFunc(ICustomDataInput &input) {
    this->total = input.readUnsignedShort();

}

