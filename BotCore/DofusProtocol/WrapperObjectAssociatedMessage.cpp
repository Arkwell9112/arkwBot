#include "WrapperObjectAssociatedMessage.h"

void WrapperObjectAssociatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_WrapperObjectAssociatedMessage(input);
}

void WrapperObjectAssociatedMessage::deserializeAs_WrapperObjectAssociatedMessage(ICustomDataInput &input) {
    SymbioticObjectAssociatedMessage::deserialize(input);
}

