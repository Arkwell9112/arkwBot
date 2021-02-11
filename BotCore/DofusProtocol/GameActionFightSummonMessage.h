#ifndef GAMEACTIONFIGHTSUMMONMESSAGE
#define GAMEACTIONFIGHTSUMMONMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "GameFightFighterInformations.h"
#include "AbstractGameActionMessage.h"

class GameActionFightSummonMessage : public AbstractGameActionMessage {
public:
    std::vector<GameFightFighterInformations> summons;
    unsigned int protocolId = 5002;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightSummonMessage(ICustomDataInput &input);

    void _summonsFunc(ICustomDataInput &input);
};

#endif