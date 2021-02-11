#include "FightExternalInformations.h"

void FightExternalInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightExternalInformations(input);
}

void FightExternalInformations::deserializeAs_FightExternalInformations(ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_fightTypeFunc(input);
    this->_fightStartFunc(input);
    this->_fightSpectatorLockedFunc(input);
    for (unsigned int _i5 = 0; _i5 < 2; _i5++) {
        this->fightTeams.emplace_back();
        this->fightTeams.at(_i5).deserialize(input);
    }
    for (unsigned int _i6 = 0; _i6 < 2; _i6++) {
        this->fightTeamsOptions.emplace_back();
        this->fightTeamsOptions.at(_i6).deserialize(input);
    }
}

void FightExternalInformations::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void FightExternalInformations::_fightTypeFunc(ICustomDataInput &input) {
    this->fightType = input.readByte();

}

void FightExternalInformations::_fightStartFunc(ICustomDataInput &input) {
    this->fightStart = input.readInt();

}

void FightExternalInformations::_fightSpectatorLockedFunc(ICustomDataInput &input) {
    this->fightSpectatorLocked = input.readBoolean();
}
