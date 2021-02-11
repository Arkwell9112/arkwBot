#ifndef GAMEACTIONFIGHTKILLMESSAGE
#define GAMEACTIONFIGHTKILLMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightKillMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int protocolId = 567;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightKillMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif