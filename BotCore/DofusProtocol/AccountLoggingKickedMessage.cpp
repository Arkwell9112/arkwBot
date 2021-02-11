#include "AccountLoggingKickedMessage.h"

void AccountLoggingKickedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AccountLoggingKickedMessage(input);
}

void AccountLoggingKickedMessage::deserializeAs_AccountLoggingKickedMessage(ICustomDataInput &input) {
    this->_daysFunc(input);
    this->_hoursFunc(input);
    this->_minutesFunc(input);
}

void AccountLoggingKickedMessage::_daysFunc(ICustomDataInput &input) {
    this->days = input.readVarUhShort();

}

void AccountLoggingKickedMessage::_hoursFunc(ICustomDataInput &input) {
    this->hours = input.readByte();

}

void AccountLoggingKickedMessage::_minutesFunc(ICustomDataInput &input) {
    this->minutes = input.readByte();

}

