#include "BasicWhoAmIRequestMessage.h"

void BasicWhoAmIRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicWhoAmIRequestMessage(input);
}

void BasicWhoAmIRequestMessage::deserializeAs_BasicWhoAmIRequestMessage(ICustomDataInput &input) {
    this->_verboseFunc(input);
}

void BasicWhoAmIRequestMessage::_verboseFunc(ICustomDataInput &input) {
    this->verbose = input.readBoolean();
}

