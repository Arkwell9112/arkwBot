#include "PartyModifiableStatusMessage.h"

void PartyModifiableStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyModifiableStatusMessage(input);
}

void PartyModifiableStatusMessage::deserializeAs_PartyModifiableStatusMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_enabledFunc(input);
}

void PartyModifiableStatusMessage::_enabledFunc(ICustomDataInput &input) {
    this->enabled = input.readBoolean();
}

