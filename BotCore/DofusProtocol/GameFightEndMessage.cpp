#include "../ProtocolTypeManager.h"
#include "GameFightEndMessage.h"

void GameFightEndMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightEndMessage(input);
}

void GameFightEndMessage::deserializeAs_GameFightEndMessage(ICustomDataInput &input) {
    unsigned int _id4 = 0;
    FightResultListEntry _item4;
    NamedPartyTeamWithOutcome _item5;
    this->_durationFunc(input);
    this->_rewardRateFunc(input);
    this->_lootShareLimitMalusFunc(input);
    unsigned int _resultsLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _resultsLen; _i4++) {
        _id4 = input.readUnsignedShort();
        _item4 = ProtocolTypeManager::getObject<FightResultListEntry>(input, _id4);
        this->results.push_back(_item4);
    }
    unsigned int _namedPartyTeamsOutcomesLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _namedPartyTeamsOutcomesLen; _i5++) {
        _item5.deserialize(input);
        this->namedPartyTeamsOutcomes.push_back(_item5);
    }
}

void GameFightEndMessage::_durationFunc(ICustomDataInput &input) {
    this->duration = input.readInt();

}

void GameFightEndMessage::_rewardRateFunc(ICustomDataInput &input) {
    this->rewardRate = input.readVarShort();
}

void GameFightEndMessage::_lootShareLimitMalusFunc(ICustomDataInput &input) {
    this->lootShareLimitMalus = input.readShort();
}

void GameFightEndMessage::_resultsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    FightResultListEntry _item = ProtocolTypeManager::getObject<FightResultListEntry>(input, _id);
    _item.deserialize(input);
    this->results.push_back(_item);
}

void GameFightEndMessage::_namedPartyTeamsOutcomesFunc(ICustomDataInput &input) {
    NamedPartyTeamWithOutcome _item;
    _item.deserialize(input);
    this->namedPartyTeamsOutcomes.push_back(_item);
}

