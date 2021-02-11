#include "MountRenamedMessage.h"

void MountRenamedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountRenamedMessage(input);
}

void MountRenamedMessage::deserializeAs_MountRenamedMessage(ICustomDataInput &input) {
    this->_mountIdFunc(input);
    this->_nameFunc(input);
}

void MountRenamedMessage::_mountIdFunc(ICustomDataInput &input) {
    this->mountId = input.readVarInt();
}

void MountRenamedMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

