#include "GuildInAllianceVersatileInformations.h"

void GuildInAllianceVersatileInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInAllianceVersatileInformations(input);
}

void GuildInAllianceVersatileInformations::deserializeAs_GuildInAllianceVersatileInformations(ICustomDataInput &input) {
    GuildVersatileInformations::deserialize(input);
    this->_allianceIdFunc(input);
}

void GuildInAllianceVersatileInformations::_allianceIdFunc(ICustomDataInput &input) {
    this->allianceId = input.readVarUhInt();

}

