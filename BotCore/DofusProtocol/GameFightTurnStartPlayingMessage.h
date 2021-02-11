#ifndef GAMEFIGHTTURNSTARTPLAYINGMESSAGE
#define GAMEFIGHTTURNSTARTPLAYINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightTurnStartPlayingMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3850;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightTurnStartPlayingMessage(ICustomDataInput &input);
};

#endif