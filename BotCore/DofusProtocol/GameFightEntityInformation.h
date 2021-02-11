#ifndef GAMEFIGHTENTITYINFORMATION
#define GAMEFIGHTENTITYINFORMATION

#include "../IO/ICustomDataInput.h"
#include "GameFightFighterInformations.h"
#include "EntityInformation.h"

class GameFightEntityInformation : public GameFightFighterInformations {
public:
    unsigned int entityModelId = 0;
    unsigned int level = 0;
    double masterId = 0;
    unsigned int protocolId = 8660;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightEntityInformation(ICustomDataInput &input);

    void _entityModelIdFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _masterIdFunc(ICustomDataInput &input);
};

#endif