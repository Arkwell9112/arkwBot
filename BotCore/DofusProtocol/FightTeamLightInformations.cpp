#include "../IO/BooleanByteWrapper.h"
#include "FightTeamLightInformations.h"

void FightTeamLightInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTeamLightInformations(input);
}

void FightTeamLightInformations::deserializeAs_FightTeamLightInformations(ICustomDataInput &input) {
    AbstractFightTeamInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_teamMembersCountFunc(input);
    this->_meanLevelFunc(input);
}

void FightTeamLightInformations::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->hasFriend = BooleanByteWrapper::getFlag(_box0, 0);
    this->hasGuildMember = BooleanByteWrapper::getFlag(_box0, 1);
    this->hasAllianceMember = BooleanByteWrapper::getFlag(_box0, 2);
    this->hasGroupMember = BooleanByteWrapper::getFlag(_box0, 3);
    this->hasMyTaxCollector = BooleanByteWrapper::getFlag(_box0, 4);
}

void FightTeamLightInformations::_teamMembersCountFunc(ICustomDataInput &input) {
    this->teamMembersCount = input.readByte();

}

void FightTeamLightInformations::_meanLevelFunc(ICustomDataInput &input) {
    this->meanLevel = input.readVarUhInt();

}

