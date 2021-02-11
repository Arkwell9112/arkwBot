#ifndef GAMEFIGHTTURNRESUMEMESSAGE
#define GAMEFIGHTTURNRESUMEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameFightTurnStartMessage.h"

class GameFightTurnResumeMessage : public GameFightTurnStartMessage {
public:
    unsigned int remainingTime = 0;
    unsigned int protocolId = 2151;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightTurnResumeMessage(ICustomDataInput &input);

    void _remainingTimeFunc(ICustomDataInput &input);
};

#endif