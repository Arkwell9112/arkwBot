#include "PrismSubareaEmptyInfo.h"

void PrismSubareaEmptyInfo::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismSubareaEmptyInfo(input);
}

void PrismSubareaEmptyInfo::deserializeAs_PrismSubareaEmptyInfo(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_allianceIdFunc(input);
}

void PrismSubareaEmptyInfo::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismSubareaEmptyInfo::_allianceIdFunc(ICustomDataInput &input) {
    this->allianceId = input.readVarUhInt();

}

