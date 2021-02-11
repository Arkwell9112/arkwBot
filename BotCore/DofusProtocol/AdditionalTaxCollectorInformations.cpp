#include "AdditionalTaxCollectorInformations.h"

void AdditionalTaxCollectorInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AdditionalTaxCollectorInformations(input);
}

void AdditionalTaxCollectorInformations::deserializeAs_AdditionalTaxCollectorInformations(ICustomDataInput &input) {
    this->_collectorCallerNameFunc(input);
    this->_dateFunc(input);
}

void AdditionalTaxCollectorInformations::_collectorCallerNameFunc(ICustomDataInput &input) {
    this->collectorCallerName = input.readUTF();
}

void AdditionalTaxCollectorInformations::_dateFunc(ICustomDataInput &input) {
    this->date = input.readInt();

}

