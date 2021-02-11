#ifndef GAMECAUTIOUSMAPMOVEMENTREQUESTMESSAGE
#define GAMECAUTIOUSMAPMOVEMENTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameMapMovementRequestMessage.h"

class GameCautiousMapMovementRequestMessage : public GameMapMovementRequestMessage {
public:
    unsigned int protocolId = 1767;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameCautiousMapMovementRequestMessage(ICustomDataInput &input);
};

#endif