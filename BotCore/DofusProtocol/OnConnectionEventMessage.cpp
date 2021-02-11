#include "OnConnectionEventMessage.h"

void OnConnectionEventMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_OnConnectionEventMessage(input);
}

void OnConnectionEventMessage::deserializeAs_OnConnectionEventMessage(ICustomDataInput &input) {
    this->_eventTypeFunc(input);
}

void OnConnectionEventMessage::_eventTypeFunc(ICustomDataInput &input) {
    this->eventType = input.readByte();

}

