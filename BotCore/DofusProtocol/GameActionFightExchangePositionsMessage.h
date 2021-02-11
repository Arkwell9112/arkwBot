#ifndef GAMEACTIONFIGHTEXCHANGEPOSITIONSMESSAGE
#define GAMEACTIONFIGHTEXCHANGEPOSITIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightExchangePositionsMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int casterCellId = 0;
    int targetCellId = 0;
    unsigned int protocolId = 6932;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightExchangePositionsMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _casterCellIdFunc(ICustomDataInput &input);

    void _targetCellIdFunc(ICustomDataInput &input);
};

#endif