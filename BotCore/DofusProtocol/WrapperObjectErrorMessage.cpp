#include "WrapperObjectErrorMessage.h"

void WrapperObjectErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_WrapperObjectErrorMessage(input);
}

void WrapperObjectErrorMessage::deserializeAs_WrapperObjectErrorMessage(ICustomDataInput &input) {
    SymbioticObjectErrorMessage::deserialize(input);
}

