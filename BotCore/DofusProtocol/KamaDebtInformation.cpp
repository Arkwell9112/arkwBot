#include "KamaDebtInformation.h"

void KamaDebtInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_KamaDebtInformation(input);
}

void KamaDebtInformation::deserializeAs_KamaDebtInformation(ICustomDataInput &input) {
    DebtInformation::deserialize(input);
    this->_kamasFunc(input);
}

void KamaDebtInformation::_kamasFunc(ICustomDataInput &input) {
    this->kamas = input.readVarUhLong();

}

