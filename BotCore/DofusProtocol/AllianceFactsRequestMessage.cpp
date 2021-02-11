#include "AllianceFactsRequestMessage.h"

void AllianceFactsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceFactsRequestMessage(input);
}

void AllianceFactsRequestMessage::deserializeAs_AllianceFactsRequestMessage(ICustomDataInput &input) {
    this->_allianceIdFunc(input);
}

void AllianceFactsRequestMessage::_allianceIdFunc(ICustomDataInput &input) {
    this->allianceId = input.readVarUhInt();

}

