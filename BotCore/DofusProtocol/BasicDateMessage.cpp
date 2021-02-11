#include "BasicDateMessage.h"

void BasicDateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicDateMessage(input);
}

void BasicDateMessage::deserializeAs_BasicDateMessage(ICustomDataInput &input) {
    this->_dayFunc(input);
    this->_monthFunc(input);
    this->_yearFunc(input);
}

void BasicDateMessage::_dayFunc(ICustomDataInput &input) {
    this->day = input.readByte();

}

void BasicDateMessage::_monthFunc(ICustomDataInput &input) {
    this->month = input.readByte();

}

void BasicDateMessage::_yearFunc(ICustomDataInput &input) {
    this->year = input.readShort();

}

