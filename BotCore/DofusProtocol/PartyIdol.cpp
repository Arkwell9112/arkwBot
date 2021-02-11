#include "PartyIdol.h"

void PartyIdol::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyIdol(input);
}

void PartyIdol::deserializeAs_PartyIdol(ICustomDataInput &input) {
    double _val1 = 0;
    Idol::deserialize(input);
    unsigned int _ownersIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _ownersIdsLen; _i1++) {
        _val1 = input.readVarUhLong();

        this->ownersIds.push_back(_val1);
    }
}

void PartyIdol::_ownersIdsFunc(ICustomDataInput &input) {
    double _val = input.readVarUhLong();

    this->ownersIds.push_back(_val);
}

