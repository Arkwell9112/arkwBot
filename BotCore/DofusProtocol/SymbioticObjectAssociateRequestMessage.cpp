#include "SymbioticObjectAssociateRequestMessage.h"

void SymbioticObjectAssociateRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SymbioticObjectAssociateRequestMessage(input);
}

void
SymbioticObjectAssociateRequestMessage::deserializeAs_SymbioticObjectAssociateRequestMessage(ICustomDataInput &input) {
    this->_symbioteUIDFunc(input);
    this->_symbiotePosFunc(input);
    this->_hostUIDFunc(input);
    this->_hostPosFunc(input);
}

void SymbioticObjectAssociateRequestMessage::_symbioteUIDFunc(ICustomDataInput &input) {
    this->symbioteUID = input.readVarUhInt();

}

void SymbioticObjectAssociateRequestMessage::_symbiotePosFunc(ICustomDataInput &input) {
    this->symbiotePos = input.readUnsignedByte();

}

void SymbioticObjectAssociateRequestMessage::_hostUIDFunc(ICustomDataInput &input) {
    this->hostUID = input.readVarUhInt();

}

void SymbioticObjectAssociateRequestMessage::_hostPosFunc(ICustomDataInput &input) {
    this->hostPos = input.readUnsignedByte();

}

