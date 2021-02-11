#include "PaddockInformations.h"

void PaddockInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockInformations(input);
}

void PaddockInformations::deserializeAs_PaddockInformations(ICustomDataInput &input) {
    this->_maxOutdoorMountFunc(input);
    this->_maxItemsFunc(input);
}

void PaddockInformations::_maxOutdoorMountFunc(ICustomDataInput &input) {
    this->maxOutdoorMount = input.readVarUhShort();

}

void PaddockInformations::_maxItemsFunc(ICustomDataInput &input) {
    this->maxItems = input.readVarUhShort();

}

