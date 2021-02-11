#include "PartyMemberArenaInformations.h"

void PartyMemberArenaInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyMemberArenaInformations(input);
}

void PartyMemberArenaInformations::deserializeAs_PartyMemberArenaInformations(ICustomDataInput &input) {
    PartyMemberInformations::deserialize(input);
    this->_rankFunc(input);
}

void PartyMemberArenaInformations::_rankFunc(ICustomDataInput &input) {
    this->rank = input.readVarUhShort();

}

