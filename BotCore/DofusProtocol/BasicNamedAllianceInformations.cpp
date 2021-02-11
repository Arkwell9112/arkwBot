#include "BasicNamedAllianceInformations.h"

void BasicNamedAllianceInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicNamedAllianceInformations(input);
}

void BasicNamedAllianceInformations::deserializeAs_BasicNamedAllianceInformations(ICustomDataInput &input) {
    BasicAllianceInformations::deserialize(input);
    this->_allianceNameFunc(input);
}

void BasicNamedAllianceInformations::_allianceNameFunc(ICustomDataInput &input) {
    this->allianceName = input.readUTF();
}

