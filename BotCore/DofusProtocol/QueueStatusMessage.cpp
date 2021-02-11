#include "QueueStatusMessage.h"

void QueueStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QueueStatusMessage(input);
}

void QueueStatusMessage::deserializeAs_QueueStatusMessage(ICustomDataInput &input) {
    this->_positionFunc(input);
    this->_totalFunc(input);
}

void QueueStatusMessage::_positionFunc(ICustomDataInput &input) {
    this->position = input.readUnsignedShort();

}

void QueueStatusMessage::_totalFunc(ICustomDataInput &input) {
    this->total = input.readUnsignedShort();

}

