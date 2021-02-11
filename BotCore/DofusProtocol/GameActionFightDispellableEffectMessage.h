#ifndef GAMEACTIONFIGHTDISPELLABLEEFFECTMESSAGE
#define GAMEACTIONFIGHTDISPELLABLEEFFECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractFightDispellableEffect.h"
#include "AbstractGameActionMessage.h"

class GameActionFightDispellableEffectMessage : public AbstractGameActionMessage {
public:
    AbstractFightDispellableEffect effect;
    unsigned int protocolId = 4766;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightDispellableEffectMessage(ICustomDataInput &input);
};

#endif