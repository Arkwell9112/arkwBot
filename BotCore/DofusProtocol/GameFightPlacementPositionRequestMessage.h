#ifndef GAMEFIGHTPLACEMENTPOSITIONREQUESTMESSAGE
#define GAMEFIGHTPLACEMENTPOSITIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightPlacementPositionRequestMessage : public NetworkInterface {
public:
    unsigned int cellId = 0;
    unsigned int protocolId = 5615;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPlacementPositionRequestMessage(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif