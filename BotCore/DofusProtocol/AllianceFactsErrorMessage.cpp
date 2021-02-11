#include "AllianceFactsErrorMessage.h"

void AllianceFactsErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceFactsErrorMessage(input);
}

void AllianceFactsErrorMessage::deserializeAs_AllianceFactsErrorMessage(ICustomDataInput &input) {
    this->_allianceIdFunc(input);
}

void AllianceFactsErrorMessage::_allianceIdFunc(ICustomDataInput &input) {
    this->allianceId = input.readVarUhInt();

}

