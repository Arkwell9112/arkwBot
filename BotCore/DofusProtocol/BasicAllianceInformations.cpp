#include "BasicAllianceInformations.h"

void BasicAllianceInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BasicAllianceInformations(input);
}

void BasicAllianceInformations::deserializeAs_BasicAllianceInformations(ICustomDataInput &input) {
    AbstractSocialGroupInfos::deserialize(input);
    this->_allianceIdFunc(input);
    this->_allianceTagFunc(input);
}

void BasicAllianceInformations::_allianceIdFunc(ICustomDataInput &input) {
    this->allianceId = input.readVarUhInt();

}

void BasicAllianceInformations::_allianceTagFunc(ICustomDataInput &input) {
    this->allianceTag = input.readUTF();
}

