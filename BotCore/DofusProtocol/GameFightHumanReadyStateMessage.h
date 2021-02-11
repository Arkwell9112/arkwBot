#ifndef GAMEFIGHTHUMANREADYSTATEMESSAGE
#define GAMEFIGHTHUMANREADYSTATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightHumanReadyStateMessage : public NetworkInterface {
public:
    double characterId = 0;
    bool isReady = false;
    unsigned int protocolId = 884;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightHumanReadyStateMessage(ICustomDataInput &input);

    void _characterIdFunc(ICustomDataInput &input);

    void _isReadyFunc(ICustomDataInput &input);
};

#endif