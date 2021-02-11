#include "IgnoredDeleteRequestMessage.h"

void IgnoredDeleteRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IgnoredDeleteRequestMessage(input);
}

void IgnoredDeleteRequestMessage::deserializeAs_IgnoredDeleteRequestMessage(ICustomDataInput &input) {
    this->_accountIdFunc(input);
    this->_sessionFunc(input);
}

void IgnoredDeleteRequestMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

void IgnoredDeleteRequestMessage::_sessionFunc(ICustomDataInput &input) {
    this->session = input.readBoolean();
}

