#include "EntityDispositionInformations.h"

void EntityDispositionInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EntityDispositionInformations(input);
}

void EntityDispositionInformations::deserializeAs_EntityDispositionInformations(ICustomDataInput &input) {
    this->_cellIdFunc(input);
    this->_directionFunc(input);
}

void EntityDispositionInformations::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readShort();

}

void EntityDispositionInformations::_directionFunc(ICustomDataInput &input) {
    this->direction = input.readByte();

}

