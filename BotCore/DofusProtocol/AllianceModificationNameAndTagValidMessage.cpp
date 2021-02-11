#include "AllianceModificationNameAndTagValidMessage.h"

void AllianceModificationNameAndTagValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceModificationNameAndTagValidMessage(input);
}

void AllianceModificationNameAndTagValidMessage::deserializeAs_AllianceModificationNameAndTagValidMessage(
        ICustomDataInput &input) {
    this->_allianceNameFunc(input);
    this->_allianceTagFunc(input);
}

void AllianceModificationNameAndTagValidMessage::_allianceNameFunc(ICustomDataInput &input) {
    this->allianceName = input.readUTF();
}

void AllianceModificationNameAndTagValidMessage::_allianceTagFunc(ICustomDataInput &input) {
    this->allianceTag = input.readUTF();
}

