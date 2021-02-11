#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSCANCELMESSAGE
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSCANCELMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightPlacementSwapPositionsCancelMessage : public NetworkInterface {
public:
    unsigned int requestId = 0;
    unsigned int protocolId = 38;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPlacementSwapPositionsCancelMessage(ICustomDataInput &input);

    void _requestIdFunc(ICustomDataInput &input);
};

#endif