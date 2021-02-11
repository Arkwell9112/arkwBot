#include "IdentificationFailedMessage.h"

void IdentificationFailedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdentificationFailedMessage(input);
}

void IdentificationFailedMessage::deserializeAs_IdentificationFailedMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void IdentificationFailedMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

