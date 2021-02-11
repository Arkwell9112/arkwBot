#include "PartyLoyaltyStatusMessage.h"

void PartyLoyaltyStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyLoyaltyStatusMessage(input);
}

void PartyLoyaltyStatusMessage::deserializeAs_PartyLoyaltyStatusMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_loyalFunc(input);
}

void PartyLoyaltyStatusMessage::_loyalFunc(ICustomDataInput &input) {
    this->loyal = input.readBoolean();
}

