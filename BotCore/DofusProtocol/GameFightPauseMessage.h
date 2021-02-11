#ifndef GAMEFIGHTPAUSEMESSAGE
#define GAMEFIGHTPAUSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightPauseMessage : public NetworkInterface {
public:
    bool isPaused = false;
    unsigned int protocolId = 5189;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightPauseMessage(ICustomDataInput &input);

    void _isPausedFunc(ICustomDataInput &input);
};

#endif