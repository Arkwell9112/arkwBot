#include "SymbioticObjectErrorMessage.h"

void SymbioticObjectErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SymbioticObjectErrorMessage(input);
}

void SymbioticObjectErrorMessage::deserializeAs_SymbioticObjectErrorMessage(ICustomDataInput &input) {
    ObjectErrorMessage::deserialize(input);
    this->_errorCodeFunc(input);
}

void SymbioticObjectErrorMessage::_errorCodeFunc(ICustomDataInput &input) {
    this->errorCode = input.readByte();
}

