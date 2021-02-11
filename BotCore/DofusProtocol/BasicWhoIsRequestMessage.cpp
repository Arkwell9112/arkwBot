#include "BasicWhoIsRequestMessage.h"

void BasicWhoIsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicWhoIsRequestMessage(input);
}

void BasicWhoIsRequestMessage::deserializeAs_BasicWhoIsRequestMessage(ICustomDataInput &input) {
    this->_verboseFunc(input);
    this->_searchFunc(input);
}

void BasicWhoIsRequestMessage::_verboseFunc(ICustomDataInput &input) {
    this->verbose = input.readBoolean();
}

void BasicWhoIsRequestMessage::_searchFunc(ICustomDataInput &input) {
    this->search = input.readUTF();
}

