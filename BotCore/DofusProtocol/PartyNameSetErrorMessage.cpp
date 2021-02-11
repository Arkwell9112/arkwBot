#include "PartyNameSetErrorMessage.h"

void PartyNameSetErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyNameSetErrorMessage(input);
}

void PartyNameSetErrorMessage::deserializeAs_PartyNameSetErrorMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_resultFunc(input);
}

void PartyNameSetErrorMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();

}

