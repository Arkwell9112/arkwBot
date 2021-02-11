#include "BasicTimeMessage.h"

void BasicTimeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicTimeMessage(input);
}

void BasicTimeMessage::deserializeAs_BasicTimeMessage(ICustomDataInput &input) {
    this->_timestampFunc(input);
    this->_timezoneOffsetFunc(input);
}

void BasicTimeMessage::_timestampFunc(ICustomDataInput &input) {
    this->timestamp = input.readDouble();

}

void BasicTimeMessage::_timezoneOffsetFunc(ICustomDataInput &input) {
    this->timezoneOffset = input.readShort();
}

