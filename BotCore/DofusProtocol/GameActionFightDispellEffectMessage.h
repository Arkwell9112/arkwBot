#ifndef GAMEACTIONFIGHTDISPELLEFFECTMESSAGE
#define GAMEACTIONFIGHTDISPELLEFFECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameActionFightDispellMessage.h"

class GameActionFightDispellEffectMessage : public GameActionFightDispellMessage {
public:
    unsigned int boostUID = 0;
    unsigned int protocolId = 5270;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightDispellEffectMessage(ICustomDataInput &input);

    void _boostUIDFunc(ICustomDataInput &input);
};

#endif