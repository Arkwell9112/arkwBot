#include "../ProtocolTypeManager.h"
#include "FightTeamInformations.h"

void FightTeamInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTeamInformations(input);
}

void FightTeamInformations::deserializeAs_FightTeamInformations(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    FightTeamMemberInformations _item1;
    AbstractFightTeamInformations::deserialize(input);
    unsigned int _teamMembersLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _teamMembersLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<FightTeamMemberInformations>(input, _id1);
        this->teamMembers.push_back(_item1);
    }
}

void FightTeamInformations::_teamMembersFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    FightTeamMemberInformations _item = ProtocolTypeManager::getObject<FightTeamMemberInformations>(input, _id);
    _item.deserialize(input);
    this->teamMembers.push_back(_item);
}

