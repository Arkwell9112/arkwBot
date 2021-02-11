#ifndef GAMEACTIONFIGHTDEATHMESSAGE
#define GAMEACTIONFIGHTDEATHMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightDeathMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int protocolId = 7906;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightDeathMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif