#include "GameActionFightExchangePositionsMessage.h"

void GameActionFightExchangePositionsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightExchangePositionsMessage(input);
}

void GameActionFightExchangePositionsMessage::deserializeAs_GameActionFightExchangePositionsMessage(
        ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_casterCellIdFunc(input);
    this->_targetCellIdFunc(input);
}

void GameActionFightExchangePositionsMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightExchangePositionsMessage::_casterCellIdFunc(ICustomDataInput &input) {
    this->casterCellId = input.readShort();

}

void GameActionFightExchangePositionsMessage::_targetCellIdFunc(ICustomDataInput &input) {
    this->targetCellId = input.readShort();

}

