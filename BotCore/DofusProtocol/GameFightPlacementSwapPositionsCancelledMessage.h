#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSCANCELLEDMESSAGE
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSCANCELLEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightPlacementSwapPositionsCancelledMessage : public NetworkInterface {
public:
    unsigned int requestId = 0;
    double cancellerId = 0;
    unsigned int protocolId = 2726;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPlacementSwapPositionsCancelledMessage(ICustomDataInput &input);

    void _requestIdFunc(ICustomDataInput &input);

    void _cancellerIdFunc(ICustomDataInput &input);
};

#endif