#ifndef GAMEACTIONFIGHTDISPELLMESSAGE
#define GAMEACTIONFIGHTDISPELLMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightDispellMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    bool verboseCast = false;
    unsigned int protocolId = 8539;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightDispellMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _verboseCastFunc(ICustomDataInput &input);
};

#endif