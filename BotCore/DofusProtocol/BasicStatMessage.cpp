#include "BasicStatMessage.h"

void BasicStatMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicStatMessage(input);
}

void BasicStatMessage::deserializeAs_BasicStatMessage(ICustomDataInput &input) {
    this->_timeSpentFunc(input);
    this->_statIdFunc(input);
}

void BasicStatMessage::_timeSpentFunc(ICustomDataInput &input) {
    this->timeSpent = input.readDouble();

}

void BasicStatMessage::_statIdFunc(ICustomDataInput &input) {
    this->statId = input.readVarUhShort();

}

