#ifndef GAMEACTIONFIGHTLIFEPOINTSGAINMESSAGE
#define GAMEACTIONFIGHTLIFEPOINTSGAINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightLifePointsGainMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int delta = 0;
    unsigned int protocolId = 1021;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightLifePointsGainMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _deltaFunc(ICustomDataInput &input);
};

#endif