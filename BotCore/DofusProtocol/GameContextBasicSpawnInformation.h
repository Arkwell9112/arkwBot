#ifndef GAMECONTEXTBASICSPAWNINFORMATION
#define GAMECONTEXTBASICSPAWNINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "SpawnInformation.h"
#include "GameContextActorPositionInformations.h"

class GameContextBasicSpawnInformation : public NetworkInterface {
public:
    unsigned int teamId = 2;
    bool alive = false;
    GameContextActorPositionInformations informations;
    unsigned int protocolId = 2478;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameContextBasicSpawnInformation(ICustomDataInput &input);

    void _teamIdFunc(ICustomDataInput &input);

    void _aliveFunc(ICustomDataInput &input);
};

#endif