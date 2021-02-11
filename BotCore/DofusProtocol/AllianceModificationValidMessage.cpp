#include "AllianceModificationValidMessage.h"

void AllianceModificationValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceModificationValidMessage(input);
}

void AllianceModificationValidMessage::deserializeAs_AllianceModificationValidMessage(ICustomDataInput &input) {
    this->_allianceNameFunc(input);
    this->_allianceTagFunc(input);
    this->Alliancemblem.deserialize(input);
}

void AllianceModificationValidMessage::_allianceNameFunc(ICustomDataInput &input) {
    this->allianceName = input.readUTF();
}

void AllianceModificationValidMessage::_allianceTagFunc(ICustomDataInput &input) {
    this->allianceTag = input.readUTF();
}

