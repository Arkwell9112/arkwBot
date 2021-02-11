#include "../ProtocolTypeManager.h"
#include "GameFightShowFighterMessage.h"

void GameFightShowFighterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightShowFighterMessage(input);
}

void GameFightShowFighterMessage::deserializeAs_GameFightShowFighterMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->informations = ProtocolTypeManager::getObject<GameFightFighterInformations>(input, _id1);
}

