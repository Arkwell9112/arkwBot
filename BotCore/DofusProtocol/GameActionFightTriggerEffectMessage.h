#ifndef GAMEACTIONFIGHTTRIGGEREFFECTMESSAGE
#define GAMEACTIONFIGHTTRIGGEREFFECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameActionFightDispellEffectMessage.h"

class GameActionFightTriggerEffectMessage : public GameActionFightDispellEffectMessage {
public:
    unsigned int protocolId = 694;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightTriggerEffectMessage(ICustomDataInput &input);
};

#endif