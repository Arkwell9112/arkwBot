#ifndef GAMEACTIONFIGHTLIFEANDSHIELDPOINTSLOSTMESSAGE
#define GAMEACTIONFIGHTLIFEANDSHIELDPOINTSLOSTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "GameActionFightLifePointsLostMessage.h"

class GameActionFightLifeAndShieldPointsLostMessage : public GameActionFightLifePointsLostMessage {
public:
    unsigned int shieldLoss = 0;
    unsigned int protocolId = 1903;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightLifeAndShieldPointsLostMessage(ICustomDataInput &input);

    void _shieldLossFunc(ICustomDataInput &input);
};

#endif