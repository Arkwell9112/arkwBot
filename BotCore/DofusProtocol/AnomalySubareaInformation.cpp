#include "AnomalySubareaInformation.h"

void AnomalySubareaInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AnomalySubareaInformation(input);
}

void AnomalySubareaInformation::deserializeAs_AnomalySubareaInformation(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_rewardRateFunc(input);
    this->_hasAnomalyFunc(input);
    this->_anomalyClosingTimeFunc(input);
}

void AnomalySubareaInformation::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void AnomalySubareaInformation::_rewardRateFunc(ICustomDataInput &input) {
    this->rewardRate = input.readVarShort();
}

void AnomalySubareaInformation::_hasAnomalyFunc(ICustomDataInput &input) {
    this->hasAnomaly = input.readBoolean();
}

void AnomalySubareaInformation::_anomalyClosingTimeFunc(ICustomDataInput &input) {
    this->anomalyClosingTime = input.readVarUhLong();

}

