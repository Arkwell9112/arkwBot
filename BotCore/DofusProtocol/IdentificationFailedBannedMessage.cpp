#include "IdentificationFailedBannedMessage.h"

void IdentificationFailedBannedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdentificationFailedBannedMessage(input);
}

void IdentificationFailedBannedMessage::deserializeAs_IdentificationFailedBannedMessage(ICustomDataInput &input) {
    IdentificationFailedMessage::deserialize(input);
    this->_banEndDateFunc(input);
}

void IdentificationFailedBannedMessage::_banEndDateFunc(ICustomDataInput &input) {
    this->banEndDate = input.readDouble();

}

