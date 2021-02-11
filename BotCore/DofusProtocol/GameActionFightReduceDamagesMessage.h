#ifndef GAMEACTIONFIGHTREDUCEDAMAGESMESSAGE
#define GAMEACTIONFIGHTREDUCEDAMAGESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightReduceDamagesMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int amount = 0;
    unsigned int protocolId = 6103;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightReduceDamagesMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _amountFunc(ICustomDataInput &input);
};

#endif