#ifndef GAMEACTIONFIGHTLIFEPOINTSLOSTMESSAGE
#define GAMEACTIONFIGHTLIFEPOINTSLOSTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightLifePointsLostMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int loss = 0;
    unsigned int permanentDamages = 0;
    int elementId = 0;
    unsigned int protocolId = 4391;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightLifePointsLostMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _lossFunc(ICustomDataInput &input);

    void _permanentDamagesFunc(ICustomDataInput &input);

    void _elementIdFunc(ICustomDataInput &input);
};

#endif