#ifndef GAMECAUTIOUSMAPMOVEMENTMESSAGE
#define GAMECAUTIOUSMAPMOVEMENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameMapMovementMessage.h"

class GameCautiousMapMovementMessage : public GameMapMovementMessage {
public:
    unsigned int protocolId = 7676;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameCautiousMapMovementMessage(ICustomDataInput &input);
};

#endif