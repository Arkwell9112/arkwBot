#include "HouseLockFromInsideRequestMessage.h"

void HouseLockFromInsideRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseLockFromInsideRequestMessage(input);
}

void HouseLockFromInsideRequestMessage::deserializeAs_HouseLockFromInsideRequestMessage(ICustomDataInput &input) {
    LockableChangeCodeMessage::deserialize(input);
}

