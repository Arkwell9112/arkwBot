#include "GameRolePlayNpcInformations.h"

void GameRolePlayNpcInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayNpcInformations(input);
}

void GameRolePlayNpcInformations::deserializeAs_GameRolePlayNpcInformations(ICustomDataInput &input) {
    GameRolePlayActorInformations::deserialize(input);
    this->_npcIdFunc(input);
    this->_sexFunc(input);
    this->_specialArtworkIdFunc(input);
}

void GameRolePlayNpcInformations::_npcIdFunc(ICustomDataInput &input) {
    this->npcId = input.readVarUhShort();

}

void GameRolePlayNpcInformations::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

void GameRolePlayNpcInformations::_specialArtworkIdFunc(ICustomDataInput &input) {
    this->specialArtworkId = input.readVarUhShort();

}

