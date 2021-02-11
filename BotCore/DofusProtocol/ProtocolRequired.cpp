#include "ProtocolRequired.h"

void ProtocolRequired::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ProtocolRequired(input);
}

void ProtocolRequired::deserializeAs_ProtocolRequired(ICustomDataInput &input) {
    this->_versionFunc(input);
}

void ProtocolRequired::_versionFunc(ICustomDataInput &input) {
    this->version = input.readUTF();
}

