#include "GameRolePlayMountInformations.h"

void GameRolePlayMountInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayMountInformations(input);
}

void GameRolePlayMountInformations::deserializeAs_GameRolePlayMountInformations(ICustomDataInput &input) {
    GameRolePlayNamedActorInformations::deserialize(input);
    this->_ownerNameFunc(input);
    this->_levelFunc(input);
}

void GameRolePlayMountInformations::_ownerNameFunc(ICustomDataInput &input) {
    this->ownerName = input.readUTF();
}

void GameRolePlayMountInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readUnsignedByte();

}

