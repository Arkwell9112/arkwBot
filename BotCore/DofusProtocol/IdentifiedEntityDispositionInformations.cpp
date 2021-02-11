#include "IdentifiedEntityDispositionInformations.h"

void IdentifiedEntityDispositionInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdentifiedEntityDispositionInformations(input);
}

void IdentifiedEntityDispositionInformations::deserializeAs_IdentifiedEntityDispositionInformations(
        ICustomDataInput &input) {
    EntityDispositionInformations::deserialize(input);
    this->_idFunc(input);
}

void IdentifiedEntityDispositionInformations::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

