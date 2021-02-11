#ifndef GAMEFIGHTMINIMALSTATSPREPARATION
#define GAMEFIGHTMINIMALSTATSPREPARATION

#include "../IO/ICustomDataInput.h"
#include "GameFightMinimalStats.h"

class GameFightMinimalStatsPreparation : public GameFightMinimalStats {
public:
    unsigned int initiative = 0;
    unsigned int protocolId = 4441;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightMinimalStatsPreparation(ICustomDataInput &input);

    void _initiativeFunc(ICustomDataInput &input);
};

#endif