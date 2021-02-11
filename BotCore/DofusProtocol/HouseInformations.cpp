#include "HouseInformations.h"

void HouseInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseInformations(input);
}

void HouseInformations::deserializeAs_HouseInformations(ICustomDataInput &input) {
    this->_houseIdFunc(input);
    this->_modelIdFunc(input);
}

void HouseInformations::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void HouseInformations::_modelIdFunc(ICustomDataInput &input) {
    this->modelId = input.readVarUhShort();

}

