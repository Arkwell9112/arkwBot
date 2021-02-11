#ifndef GAMEACTIONFIGHTMODIFYEFFECTSDURATIONMESSAGE
#define GAMEACTIONFIGHTMODIFYEFFECTSDURATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractGameActionMessage.h"

class GameActionFightModifyEffectsDurationMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    int delta = 0;
    unsigned int protocolId = 353;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightModifyEffectsDurationMessage(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _deltaFunc(ICustomDataInput &input);
};

#endif