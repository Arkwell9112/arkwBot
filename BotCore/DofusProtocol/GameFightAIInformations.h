#ifndef GAMEFIGHTAIINFORMATIONS
#define GAMEFIGHTAIINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameFightFighterInformations.h"

class GameFightAIInformations : public GameFightFighterInformations {
public:
    unsigned int protocolId = 2640;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightAIInformations(ICustomDataInput &input);
};

#endif