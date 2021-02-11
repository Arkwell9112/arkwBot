#include "../ProtocolTypeManager.h"
#include "FightCommonInformations.h"

void FightCommonInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightCommonInformations(input);
}

void FightCommonInformations::deserializeAs_FightCommonInformations(ICustomDataInput &input) {
    unsigned int _id3 = 0;
    FightTeamInformations _item3;
    unsigned int _val4 = 0;
    FightOptionsInformations _item5;
    this->_fightIdFunc(input);
    this->_fightTypeFunc(input);
    unsigned int _fightTeamsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _fightTeamsLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<FightTeamInformations>(input, _id3);
        this->fightTeams.push_back(_item3);
    }
    unsigned int _fightTeamsPositionsLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _fightTeamsPositionsLen; _i4++) {
        _val4 = input.readVarUhShort();

        this->fightTeamsPositions.push_back(_val4);
    }
    unsigned int _fightTeamsOptionsLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _fightTeamsOptionsLen; _i5++) {
        _item5.deserialize(input);
        this->fightTeamsOptions.push_back(_item5);
    }
}

void FightCommonInformations::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void FightCommonInformations::_fightTypeFunc(ICustomDataInput &input) {
    this->fightType = input.readByte();

}

void FightCommonInformations::_fightTeamsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    FightTeamInformations _item = ProtocolTypeManager::getObject<FightTeamInformations>(input, _id);
    _item.deserialize(input);
    this->fightTeams.push_back(_item);
}

void FightCommonInformations::_fightTeamsPositionsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->fightTeamsPositions.push_back(_val);
}

void FightCommonInformations::_fightTeamsOptionsFunc(ICustomDataInput &input) {
    FightOptionsInformations _item;
    _item.deserialize(input);
    this->fightTeamsOptions.push_back(_item);
}

