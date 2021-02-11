#include "InteractiveUseErrorMessage.h"

void InteractiveUseErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveUseErrorMessage(input);
}

void InteractiveUseErrorMessage::deserializeAs_InteractiveUseErrorMessage(ICustomDataInput &input) {
    this->_elemIdFunc(input);
    this->_skillInstanceUidFunc(input);
}

void InteractiveUseErrorMessage::_elemIdFunc(ICustomDataInput &input) {
    this->elemId = input.readVarUhInt();

}

void InteractiveUseErrorMessage::_skillInstanceUidFunc(ICustomDataInput &input) {
    this->skillInstanceUid = input.readVarUhInt();

}

