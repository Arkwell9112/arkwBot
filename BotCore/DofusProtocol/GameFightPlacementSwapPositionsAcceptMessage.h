#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSACCEPTMESSAGE
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSACCEPTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightPlacementSwapPositionsAcceptMessage : public NetworkInterface {
public:
    unsigned int requestId = 0;
    unsigned int protocolId = 915;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPlacementSwapPositionsAcceptMessage(ICustomDataInput &input);

    void _requestIdFunc(ICustomDataInput &input);
};

#endif