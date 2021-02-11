#include "../ProtocolTypeManager.h"
#include "GameRolePlayShowActorMessage.h"

void GameRolePlayShowActorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayShowActorMessage(input);
}

void GameRolePlayShowActorMessage::deserializeAs_GameRolePlayShowActorMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->informations = ProtocolTypeManager::getObject<GameRolePlayActorInformations>(input, _id1);
}

