#ifndef GAMEACTIONFIGHTCHANGELOOKMESSAGE
#define GAMEACTIONFIGHTCHANGELOOKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "EntityLook.h"
#include "AbstractGameActionMessage.h"

class GameActionFightChangeLookMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    EntityLook entityLook;
    unsigned int protocolId = 562;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightChangeLookMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif