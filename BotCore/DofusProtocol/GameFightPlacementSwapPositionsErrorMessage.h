#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSERRORMESSAGE
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightPlacementSwapPositionsErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1535;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPlacementSwapPositionsErrorMessage(ICustomDataInput &input);
};

#endif