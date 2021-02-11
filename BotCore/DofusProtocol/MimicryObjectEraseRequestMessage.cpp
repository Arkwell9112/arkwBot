#include "MimicryObjectEraseRequestMessage.h"

void MimicryObjectEraseRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MimicryObjectEraseRequestMessage(input);
}

void MimicryObjectEraseRequestMessage::deserializeAs_MimicryObjectEraseRequestMessage(ICustomDataInput &input) {
    this->_hostUIDFunc(input);
    this->_hostPosFunc(input);
}

void MimicryObjectEraseRequestMessage::_hostUIDFunc(ICustomDataInput &input) {
    this->hostUID = input.readVarUhInt();

}

void MimicryObjectEraseRequestMessage::_hostPosFunc(ICustomDataInput &input) {
    this->hostPos = input.readUnsignedByte();

}

