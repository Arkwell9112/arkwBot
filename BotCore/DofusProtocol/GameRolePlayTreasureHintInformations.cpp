#include "GameRolePlayTreasureHintInformations.h"

void GameRolePlayTreasureHintInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayTreasureHintInformations(input);
}

void GameRolePlayTreasureHintInformations::deserializeAs_GameRolePlayTreasureHintInformations(ICustomDataInput &input) {
    GameRolePlayActorInformations::deserialize(input);
    this->_npcIdFunc(input);
}

void GameRolePlayTreasureHintInformations::_npcIdFunc(ICustomDataInput &input) {
    this->npcId = input.readVarUhShort();

}

