#include "KohUpdateMessage.h"

void KohUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_KohUpdateMessage(input);
}

void KohUpdateMessage::deserializeAs_KohUpdateMessage(ICustomDataInput &input) {
    AllianceInformations _item1;
    unsigned int _val2 = 0;
    unsigned int _val3 = 0;
    unsigned int _val4 = 0;
    BasicAllianceInformations _item5;
    unsigned int _alliancesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _alliancesLen; _i1++) {
        _item1.deserialize(input);
        this->alliances.push_back(_item1);
    }
    unsigned int _allianceNbMembersLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _allianceNbMembersLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->allianceNbMembers.push_back(_val2);
    }
    unsigned int _allianceRoundWeigthLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _allianceRoundWeigthLen; _i3++) {
        _val3 = input.readVarUhInt();

        this->allianceRoundWeigth.push_back(_val3);
    }
    unsigned int _allianceMatchScoreLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _allianceMatchScoreLen; _i4++) {
        _val4 = input.readByte();

        this->allianceMatchScore.push_back(_val4);
    }
    unsigned int _allianceMapWinnersLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _allianceMapWinnersLen; _i5++) {
        _item5.deserialize(input);
        this->allianceMapWinners.push_back(_item5);
    }
    this->_allianceMapWinnerScoreFunc(input);
    this->_allianceMapMyAllianceScoreFunc(input);
    this->_nextTickTimeFunc(input);
}

void KohUpdateMessage::_alliancesFunc(ICustomDataInput &input) {
    AllianceInformations _item;
    _item.deserialize(input);
    this->alliances.push_back(_item);
}

void KohUpdateMessage::_allianceNbMembersFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->allianceNbMembers.push_back(_val);
}

void KohUpdateMessage::_allianceRoundWeigthFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->allianceRoundWeigth.push_back(_val);
}

void KohUpdateMessage::_allianceMatchScoreFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->allianceMatchScore.push_back(_val);
}

void KohUpdateMessage::_allianceMapWinnersFunc(ICustomDataInput &input) {
    BasicAllianceInformations _item;
    _item.deserialize(input);
    this->allianceMapWinners.push_back(_item);
}

void KohUpdateMessage::_allianceMapWinnerScoreFunc(ICustomDataInput &input) {
    this->allianceMapWinnerScore = input.readVarUhInt();

}

void KohUpdateMessage::_allianceMapMyAllianceScoreFunc(ICustomDataInput &input) {
    this->allianceMapMyAllianceScore = input.readVarUhInt();

}

void KohUpdateMessage::_nextTickTimeFunc(ICustomDataInput &input) {
    this->nextTickTime = input.readDouble();

}

