#include "../IO/BooleanByteWrapper.h"
#include "TrustStatusMessage.h"

void TrustStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TrustStatusMessage(input);
}

void TrustStatusMessage::deserializeAs_TrustStatusMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
}

void TrustStatusMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->trusted = BooleanByteWrapper::getFlag(_box0, 0);
    this->certified = BooleanByteWrapper::getFlag(_box0, 1);
}

