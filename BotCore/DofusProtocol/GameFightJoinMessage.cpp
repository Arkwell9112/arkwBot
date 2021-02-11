#include "../IO/BooleanByteWrapper.h"
#include "GameFightJoinMessage.h"

void GameFightJoinMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightJoinMessage(input);
}

void GameFightJoinMessage::deserializeAs_GameFightJoinMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_timeMaxBeforeFightStartFunc(input);
    this->_fightTypeFunc(input);
}

void GameFightJoinMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->isTeamPhase = BooleanByteWrapper::getFlag(_box0, 0);
    this->canBeCancelled = BooleanByteWrapper::getFlag(_box0, 1);
    this->canSayReady = BooleanByteWrapper::getFlag(_box0, 2);
    this->isFightStarted = BooleanByteWrapper::getFlag(_box0, 3);
}

void GameFightJoinMessage::_timeMaxBeforeFightStartFunc(ICustomDataInput &input) {
    this->timeMaxBeforeFightStart = input.readShort();

}

void GameFightJoinMessage::_fightTypeFunc(ICustomDataInput &input) {
    this->fightType = input.readByte();

}

