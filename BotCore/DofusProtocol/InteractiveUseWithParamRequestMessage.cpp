#include "InteractiveUseWithParamRequestMessage.h"

void InteractiveUseWithParamRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveUseWithParamRequestMessage(input);
}

void
InteractiveUseWithParamRequestMessage::deserializeAs_InteractiveUseWithParamRequestMessage(ICustomDataInput &input) {
    InteractiveUseRequestMessage::deserialize(input);
    this->_idFunc(input);
}

void InteractiveUseWithParamRequestMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readInt();
}

