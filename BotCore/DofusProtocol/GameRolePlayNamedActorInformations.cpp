#include "GameRolePlayNamedActorInformations.h"

void GameRolePlayNamedActorInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayNamedActorInformations(input);
}

void GameRolePlayNamedActorInformations::deserializeAs_GameRolePlayNamedActorInformations(ICustomDataInput &input) {
    GameRolePlayActorInformations::deserialize(input);
    this->_nameFunc(input);
}

void GameRolePlayNamedActorInformations::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

