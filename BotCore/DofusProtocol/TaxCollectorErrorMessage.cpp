#include "TaxCollectorErrorMessage.h"

void TaxCollectorErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorErrorMessage(input);
}

void TaxCollectorErrorMessage::deserializeAs_TaxCollectorErrorMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void TaxCollectorErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();
}

