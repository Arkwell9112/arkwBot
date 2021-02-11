#include "BufferInformation.h"

void BufferInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BufferInformation(input);
}

void BufferInformation::deserializeAs_BufferInformation(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_amountFunc(input);
}

void BufferInformation::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhLong();

}

void BufferInformation::_amountFunc(ICustomDataInput &input) {
    this->amount = input.readVarUhLong();

}

