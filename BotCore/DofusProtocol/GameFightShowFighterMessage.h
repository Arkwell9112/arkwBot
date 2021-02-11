#ifndef GAMEFIGHTSHOWFIGHTERMESSAGE
#define GAMEFIGHTSHOWFIGHTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GameFightFighterInformations.h"

class GameFightShowFighterMessage : public NetworkInterface {
public:
    GameFightFighterInformations informations;
    unsigned int protocolId = 4483;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightShowFighterMessage(ICustomDataInput &input);
};

#endif