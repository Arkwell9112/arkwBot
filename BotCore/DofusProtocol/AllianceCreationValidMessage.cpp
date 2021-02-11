#include "AllianceCreationValidMessage.h"

void AllianceCreationValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceCreationValidMessage(input);
}

void AllianceCreationValidMessage::deserializeAs_AllianceCreationValidMessage(ICustomDataInput &input) {
    this->_allianceNameFunc(input);
    this->_allianceTagFunc(input);
    this->allianceEmblem.deserialize(input);
}

void AllianceCreationValidMessage::_allianceNameFunc(ICustomDataInput &input) {
    this->allianceName = input.readUTF();
}

void AllianceCreationValidMessage::_allianceTagFunc(ICustomDataInput &input) {
    this->allianceTag = input.readUTF();
}

