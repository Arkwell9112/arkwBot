#ifndef GAMEFIGHTSPECTATEPLAYERREQUESTMESSAGE
#define GAMEFIGHTSPECTATEPLAYERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightSpectatePlayerRequestMessage : public NetworkInterface {
public:
    double playerId = 0;
    unsigned int protocolId = 3525;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightSpectatePlayerRequestMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif