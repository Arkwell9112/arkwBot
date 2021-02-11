#include "DebtInformation.h"

void DebtInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DebtInformation(input);
}

void DebtInformation::deserializeAs_DebtInformation(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_timestampFunc(input);
}

void DebtInformation::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

void DebtInformation::_timestampFunc(ICustomDataInput &input) {
    this->timestamp = input.readDouble();

}

