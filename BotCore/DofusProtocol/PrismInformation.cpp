#include "PrismInformation.h"

void PrismInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismInformation(input);
}

void PrismInformation::deserializeAs_PrismInformation(ICustomDataInput &input) {
    this->_typeIdFunc(input);
    this->_stateFunc(input);
    this->_nextVulnerabilityDateFunc(input);
    this->_placementDateFunc(input);
    this->_rewardTokenCountFunc(input);
}

void PrismInformation::_typeIdFunc(ICustomDataInput &input) {
    this->typeId = input.readByte();

}

void PrismInformation::_stateFunc(ICustomDataInput &input) {
    this->state = input.readByte();

}

void PrismInformation::_nextVulnerabilityDateFunc(ICustomDataInput &input) {
    this->nextVulnerabilityDate = input.readInt();

}

void PrismInformation::_placementDateFunc(ICustomDataInput &input) {
    this->placementDate = input.readInt();

}

void PrismInformation::_rewardTokenCountFunc(ICustomDataInput &input) {
    this->rewardTokenCount = input.readVarUhInt();

}

