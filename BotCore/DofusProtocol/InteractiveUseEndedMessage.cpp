#include "InteractiveUseEndedMessage.h"

void InteractiveUseEndedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveUseEndedMessage(input);
}

void InteractiveUseEndedMessage::deserializeAs_InteractiveUseEndedMessage(ICustomDataInput &input) {
    this->_elemIdFunc(input);
    this->_skillIdFunc(input);
}

void InteractiveUseEndedMessage::_elemIdFunc(ICustomDataInput &input) {
    this->elemId = input.readVarUhInt();

}

void InteractiveUseEndedMessage::_skillIdFunc(ICustomDataInput &input) {
    this->skillId = input.readVarUhShort();

}

