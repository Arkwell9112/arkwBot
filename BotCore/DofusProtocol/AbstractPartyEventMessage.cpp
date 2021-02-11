#include "AbstractPartyEventMessage.h"

void AbstractPartyEventMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractPartyEventMessage(input);
}

void AbstractPartyEventMessage::deserializeAs_AbstractPartyEventMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
}

