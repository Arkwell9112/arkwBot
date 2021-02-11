#include "SymbioticObjectAssociatedMessage.h"

void SymbioticObjectAssociatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SymbioticObjectAssociatedMessage(input);
}

void SymbioticObjectAssociatedMessage::deserializeAs_SymbioticObjectAssociatedMessage(ICustomDataInput &input) {
    this->_hostUIDFunc(input);
}

void SymbioticObjectAssociatedMessage::_hostUIDFunc(ICustomDataInput &input) {
    this->hostUID = input.readVarUhInt();

}

