#include "../ProtocolTypeManager.h"
#include "GameRolePlayPortalInformations.h"

void GameRolePlayPortalInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayPortalInformations(input);
}

void GameRolePlayPortalInformations::deserializeAs_GameRolePlayPortalInformations(ICustomDataInput &input) {
    GameRolePlayActorInformations::deserialize(input);
    unsigned int _id1 = input.readUnsignedShort();
    this->portal = ProtocolTypeManager::getObject<PortalInformation>(input, _id1);
}

