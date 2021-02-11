#include "PaddockBuyableInformations.h"

void PaddockBuyableInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockBuyableInformations(input);
}

void PaddockBuyableInformations::deserializeAs_PaddockBuyableInformations(ICustomDataInput &input) {
    this->_priceFunc(input);
    this->_lockedFunc(input);
}

void PaddockBuyableInformations::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhLong();

}

void PaddockBuyableInformations::_lockedFunc(ICustomDataInput &input) {
    this->locked = input.readBoolean();
}

