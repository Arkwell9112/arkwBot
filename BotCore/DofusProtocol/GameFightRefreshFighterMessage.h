#ifndef GAMEFIGHTREFRESHFIGHTERMESSAGE
#define GAMEFIGHTREFRESHFIGHTERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "GameContextActorInformations.h"

class GameFightRefreshFighterMessage : public NetworkInterface {
public:
    GameContextActorInformations informations;
    unsigned int protocolId = 3511;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightRefreshFighterMessage(ICustomDataInput &input);
};

#endif