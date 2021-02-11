#include "GameActionFightLifeAndShieldPointsLostMessage.h"

void GameActionFightLifeAndShieldPointsLostMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightLifeAndShieldPointsLostMessage(input);
}

void GameActionFightLifeAndShieldPointsLostMessage::deserializeAs_GameActionFightLifeAndShieldPointsLostMessage(
        ICustomDataInput &input) {
    GameActionFightLifePointsLostMessage::deserialize(input);
    this->_shieldLossFunc(input);
}

void GameActionFightLifeAndShieldPointsLostMessage::_shieldLossFunc(ICustomDataInput &input) {
    this->shieldLoss = input.readVarUhShort();

}

