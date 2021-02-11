#ifndef GAMEACTIONFIGHTSTEALKAMAMESSAGE
#define GAMEACTIONFIGHTSTEALKAMAMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightStealKamaMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    double amount = 0;
    unsigned int protocolId = 5494;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightStealKamaMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _amountFunc(ICustomDataInput &input);
};

#endif