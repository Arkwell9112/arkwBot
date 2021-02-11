#include "MountRenameRequestMessage.h"

void MountRenameRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountRenameRequestMessage(input);
}

void MountRenameRequestMessage::deserializeAs_MountRenameRequestMessage(ICustomDataInput &input) {
    this->_nameFunc(input);
    this->_mountIdFunc(input);
}

void MountRenameRequestMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void MountRenameRequestMessage::_mountIdFunc(ICustomDataInput &input) {
    this->mountId = input.readVarInt();
}

