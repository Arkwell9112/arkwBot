#ifndef GAMEACTIONFIGHTMULTIPLESUMMONMESSAGE
#define GAMEACTIONFIGHTMULTIPLESUMMONMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "GameContextSummonsInformation.h"
#include "AbstractGameActionMessage.h"

class GameActionFightMultipleSummonMessage : public AbstractGameActionMessage {
public:
    std::vector<GameContextSummonsInformation> summons;
    unsigned int protocolId = 9829;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionFightMultipleSummonMessage(ICustomDataInput &input);

    void _summonsFunc(ICustomDataInput &input);
};

#endif