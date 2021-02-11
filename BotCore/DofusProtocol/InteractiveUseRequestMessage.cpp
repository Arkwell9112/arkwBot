#include "InteractiveUseRequestMessage.h"

void InteractiveUseRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveUseRequestMessage(input);
}

void InteractiveUseRequestMessage::deserializeAs_InteractiveUseRequestMessage(ICustomDataInput &input) {
    this->_elemIdFunc(input);
    this->_skillInstanceUidFunc(input);
}

void InteractiveUseRequestMessage::_elemIdFunc(ICustomDataInput &input) {
    this->elemId = input.readVarUhInt();

}

void InteractiveUseRequestMessage::_skillInstanceUidFunc(ICustomDataInput &input) {
    this->skillInstanceUid = input.readVarUhInt();

}

