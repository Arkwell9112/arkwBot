#ifndef GAMEACTIONFIGHTSLIDEMESSAGE
#define GAMEACTIONFIGHTSLIDEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightSlideMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int startCellId = 0;
    int endCellId = 0;
    unsigned int protocolId = 4933;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightSlideMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _startCellIdFunc(ICustomDataInput &input);

    void _endCellIdFunc(ICustomDataInput &input);
};

#endif