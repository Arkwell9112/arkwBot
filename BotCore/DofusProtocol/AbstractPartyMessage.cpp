#include "AbstractPartyMessage.h"

void AbstractPartyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractPartyMessage(input);
}

void AbstractPartyMessage::deserializeAs_AbstractPartyMessage(ICustomDataInput &input) {
    this->_partyIdFunc(input);
}

void AbstractPartyMessage::_partyIdFunc(ICustomDataInput &input) {
    this->partyId = input.readVarUhInt();

}

