#include "WrapperObjectDissociateRequestMessage.h"

void WrapperObjectDissociateRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_WrapperObjectDissociateRequestMessage(input);
}

void
WrapperObjectDissociateRequestMessage::deserializeAs_WrapperObjectDissociateRequestMessage(ICustomDataInput &input) {
    this->_hostUIDFunc(input);
    this->_hostPosFunc(input);
}

void WrapperObjectDissociateRequestMessage::_hostUIDFunc(ICustomDataInput &input) {
    this->hostUID = input.readVarUhInt();

}

void WrapperObjectDissociateRequestMessage::_hostPosFunc(ICustomDataInput &input) {
    this->hostPos = input.readUnsignedByte();

}

