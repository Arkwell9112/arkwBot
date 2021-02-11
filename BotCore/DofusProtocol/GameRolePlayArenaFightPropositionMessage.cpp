#include "GameRolePlayArenaFightPropositionMessage.h"

void GameRolePlayArenaFightPropositionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaFightPropositionMessage(input);
}

void GameRolePlayArenaFightPropositionMessage::deserializeAs_GameRolePlayArenaFightPropositionMessage(
        ICustomDataInput &input) {
    double _val2 = 0;
    this->_fightIdFunc(input);
    unsigned int _alliesIdLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _alliesIdLen; _i2++) {
        _val2 = input.readDouble();

        this->alliesId.push_back(_val2);
    }
    this->_durationFunc(input);
}

void GameRolePlayArenaFightPropositionMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameRolePlayArenaFightPropositionMessage::_alliesIdFunc(ICustomDataInput &input) {
    double _val = input.readDouble();

    this->alliesId.push_back(_val);
}

void GameRolePlayArenaFightPropositionMessage::_durationFunc(ICustomDataInput &input) {
    this->duration = input.readVarUhShort();

}

