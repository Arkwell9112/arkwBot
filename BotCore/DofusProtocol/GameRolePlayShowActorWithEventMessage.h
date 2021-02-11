#ifndef GAMEROLEPLAYSHOWACTORWITHEVENTMESSAGE
#define GAMEROLEPLAYSHOWACTORWITHEVENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameRolePlayShowActorMessage.h"

class GameRolePlayShowActorWithEventMessage : public GameRolePlayShowActorMessage {
public:
    unsigned int actorEventId = 0;
    unsigned int protocolId = 294;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayShowActorWithEventMessage(ICustomDataInput &input);

    void _actorEventIdFunc(ICustomDataInput &input);
};

#endif