#include "GameRolePlayShowActorWithEventMessage.h"

void GameRolePlayShowActorWithEventMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayShowActorWithEventMessage(input);
}

void
GameRolePlayShowActorWithEventMessage::deserializeAs_GameRolePlayShowActorWithEventMessage(ICustomDataInput &input) {
    GameRolePlayShowActorMessage::deserialize(input);
    this->_actorEventIdFunc(input);
}

void GameRolePlayShowActorWithEventMessage::_actorEventIdFunc(ICustomDataInput &input) {
    this->actorEventId = input.readByte();

}

