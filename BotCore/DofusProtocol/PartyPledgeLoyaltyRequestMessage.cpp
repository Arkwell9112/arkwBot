#include "PartyPledgeLoyaltyRequestMessage.h"

void PartyPledgeLoyaltyRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyPledgeLoyaltyRequestMessage(input);
}

void PartyPledgeLoyaltyRequestMessage::deserializeAs_PartyPledgeLoyaltyRequestMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_loyalFunc(input);
}

void PartyPledgeLoyaltyRequestMessage::_loyalFunc(ICustomDataInput &input) {
    this->loyal = input.readBoolean();
}

