#ifndef GAMEFIGHTSYNCHRONIZEMESSAGE
#define GAMEFIGHTSYNCHRONIZEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameFightFighterInformations.h"

class GameFightSynchronizeMessage : public NetworkInterface {
public:
    std::vector<GameFightFighterInformations> fighters;
    unsigned int protocolId = 5218;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightSynchronizeMessage(ICustomDataInput &input);

    void _fightersFunc(ICustomDataInput &input);
};

#endif