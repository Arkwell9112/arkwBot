#include "../ProtocolTypeManager.h"
#include "GameFightRefreshFighterMessage.h"

void GameFightRefreshFighterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightRefreshFighterMessage(input);
}

void GameFightRefreshFighterMessage::deserializeAs_GameFightRefreshFighterMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->informations = ProtocolTypeManager::getObject<GameContextActorInformations>(input, _id1);
}

