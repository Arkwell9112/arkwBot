#ifndef GAMEFIGHTTURNREADYMESSAGE
#define GAMEFIGHTTURNREADYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightTurnReadyMessage : public NetworkInterface {
public:
    bool isReady = false;
    unsigned int protocolId = 4677;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightTurnReadyMessage(ICustomDataInput &input);

    void _isReadyFunc(ICustomDataInput &input);
};

#endif