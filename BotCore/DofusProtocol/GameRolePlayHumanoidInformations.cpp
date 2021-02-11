#include "../ProtocolTypeManager.h"
#include "GameRolePlayHumanoidInformations.h"

void GameRolePlayHumanoidInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayHumanoidInformations(input);
}

void GameRolePlayHumanoidInformations::deserializeAs_GameRolePlayHumanoidInformations(ICustomDataInput &input) {
    GameRolePlayNamedActorInformations::deserialize(input);
    unsigned int _id1 = input.readUnsignedShort();
    this->humanoidInfo = ProtocolTypeManager::getObject<HumanInformations>(input, _id1);
    this->_accountIdFunc(input);
}

void GameRolePlayHumanoidInformations::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

