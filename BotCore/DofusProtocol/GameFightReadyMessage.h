#ifndef GAMEFIGHTREADYMESSAGE
#define GAMEFIGHTREADYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightReadyMessage : public NetworkInterface {
public:
    bool isReady = false;
    unsigned int protocolId = 4288;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightReadyMessage(ICustomDataInput &input);

    void _isReadyFunc(ICustomDataInput &input);
};

#endif