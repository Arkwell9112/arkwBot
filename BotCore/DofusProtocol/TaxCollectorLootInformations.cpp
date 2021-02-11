#include "TaxCollectorLootInformations.h"

void TaxCollectorLootInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorLootInformations(input);
}

void TaxCollectorLootInformations::deserializeAs_TaxCollectorLootInformations(ICustomDataInput &input) {
    TaxCollectorComplementaryInformations::deserialize(input);
    this->_kamasFunc(input);
    this->_experienceFunc(input);
    this->_podsFunc(input);
    this->_itemsValueFunc(input);
}

void TaxCollectorLootInformations::_kamasFunc(ICustomDataInput &input) {
    this->kamas = input.readVarUhLong();

}

void TaxCollectorLootInformations::_experienceFunc(ICustomDataInput &input) {
    this->experience = input.readVarUhLong();

}

void TaxCollectorLootInformations::_podsFunc(ICustomDataInput &input) {
    this->pods = input.readVarUhInt();

}

void TaxCollectorLootInformations::_itemsValueFunc(ICustomDataInput &input) {
    this->itemsValue = input.readVarUhLong();

}

