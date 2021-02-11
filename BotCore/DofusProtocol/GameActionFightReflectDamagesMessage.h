#ifndef GAMEACTIONFIGHTREFLECTDAMAGESMESSAGE
#define GAMEACTIONFIGHTREFLECTDAMAGESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightReflectDamagesMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int protocolId = 7310;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightReflectDamagesMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif