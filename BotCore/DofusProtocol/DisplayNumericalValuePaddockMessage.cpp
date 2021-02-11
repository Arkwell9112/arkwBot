#include "DisplayNumericalValuePaddockMessage.h"

void DisplayNumericalValuePaddockMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DisplayNumericalValuePaddockMessage(input);
}

void DisplayNumericalValuePaddockMessage::deserializeAs_DisplayNumericalValuePaddockMessage(ICustomDataInput &input) {
    this->_rideIdFunc(input);
    this->_valueFunc(input);
    this->_typeFunc(input);
}

void DisplayNumericalValuePaddockMessage::_rideIdFunc(ICustomDataInput &input) {
    this->rideId = input.readInt();
}

void DisplayNumericalValuePaddockMessage::_valueFunc(ICustomDataInput &input) {
    this->value = input.readInt();
}

void DisplayNumericalValuePaddockMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

