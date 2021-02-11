#ifndef GAMEFIGHTPLACEMENTSWAPPOSITIONSOFFERMESSAGE
#define GAMEFIGHTPLACEMENTSWAPPOSITIONSOFFERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightPlacementSwapPositionsOfferMessage : public NetworkInterface {
public:
    unsigned int requestId = 0;
    double requesterId = 0;
    unsigned int requesterCellId = 0;
    double requestedId = 0;
    unsigned int requestedCellId = 0;
    unsigned int protocolId = 41;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPlacementSwapPositionsOfferMessage(ICustomDataInput &input);

    void _requestIdFunc(ICustomDataInput &input);

    void _requesterIdFunc(ICustomDataInput &input);

    void _requesterCellIdFunc(ICustomDataInput &input);

    void _requestedIdFunc(ICustomDataInput &input);

    void _requestedCellIdFunc(ICustomDataInput &input);
};

#endif