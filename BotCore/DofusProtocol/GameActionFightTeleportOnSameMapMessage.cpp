#include "GameActionFightTeleportOnSameMapMessage.h"

void GameActionFightTeleportOnSameMapMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightTeleportOnSameMapMessage(input);
}

void GameActionFightTeleportOnSameMapMessage::deserializeAs_GameActionFightTeleportOnSameMapMessage(
        ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_cellIdFunc(input);
}

void GameActionFightTeleportOnSameMapMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightTeleportOnSameMapMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readShort();

}

