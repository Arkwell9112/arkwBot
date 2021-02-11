#ifndef GAMEACTIONFIGHTDODGEPOINTLOSSMESSAGE
#define GAMEACTIONFIGHTDODGEPOINTLOSSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightDodgePointLossMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int amount = 0;
    unsigned int protocolId = 6357;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightDodgePointLossMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _amountFunc(ICustomDataInput &input);
};

#endif