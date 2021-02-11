#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSREQUESTMESSAGE
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameFightPlacementPositionRequestMessage.h"

class GameFightPlacementSwapPositionsRequestMessage : public GameFightPlacementPositionRequestMessage {
public:
    double requestedId = 0;
    unsigned int protocolId = 7383;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPlacementSwapPositionsRequestMessage(ICustomDataInput &input);

    void _requestedIdFunc(ICustomDataInput &input);
};

#endif