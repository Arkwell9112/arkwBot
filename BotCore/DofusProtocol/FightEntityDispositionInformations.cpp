#include "FightEntityDispositionInformations.h"

void FightEntityDispositionInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightEntityDispositionInformations(input);
}

void FightEntityDispositionInformations::deserializeAs_FightEntityDispositionInformations(ICustomDataInput &input) {
    EntityDispositionInformations::deserialize(input);
    this->_carryingCharacterIdFunc(input);
}

void FightEntityDispositionInformations::_carryingCharacterIdFunc(ICustomDataInput &input) {
    this->carryingCharacterId = input.readDouble();

}

