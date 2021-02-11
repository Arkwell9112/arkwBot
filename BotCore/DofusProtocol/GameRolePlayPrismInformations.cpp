#include "../ProtocolTypeManager.h"
#include "GameRolePlayPrismInformations.h"

void GameRolePlayPrismInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayPrismInformations(input);
}

void GameRolePlayPrismInformations::deserializeAs_GameRolePlayPrismInformations(ICustomDataInput &input) {
    GameRolePlayActorInformations::deserialize(input);
    unsigned int _id1 = input.readUnsignedShort();
    this->prism = ProtocolTypeManager::getObject<PrismInformation>(input, _id1);
}

