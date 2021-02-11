#include "HavenBagFurnitureInformation.h"

void HavenBagFurnitureInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HavenBagFurnitureInformation(input);
}

void HavenBagFurnitureInformation::deserializeAs_HavenBagFurnitureInformation(ICustomDataInput &input) {
    this->_cellIdFunc(input);
    this->_funitureIdFunc(input);
    this->_orientationFunc(input);
}

void HavenBagFurnitureInformation::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

void HavenBagFurnitureInformation::_funitureIdFunc(ICustomDataInput &input) {
    this->funitureId = input.readInt();
}

void HavenBagFurnitureInformation::_orientationFunc(ICustomDataInput &input) {
    this->orientation = input.readByte();

}

