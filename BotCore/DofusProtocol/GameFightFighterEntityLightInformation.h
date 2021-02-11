#ifndef GAMEFIGHTFIGHTERENTITYLIGHTINFORMATION
#define GAMEFIGHTFIGHTERENTITYLIGHTINFORMATION

#include "../IO/ICustomDataInput.h"
#include "GameFightFighterLightInformations.h"

class GameFightFighterEntityLightInformation : public GameFightFighterLightInformations {
public:
    unsigned int entityModelId = 0;
    double masterId = 0;
    unsigned int protocolId = 3866;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightFighterEntityLightInformation(ICustomDataInput &input);

    void _entityModelIdFunc(ICustomDataInput &input);

    void _masterIdFunc(ICustomDataInput &input);
};

#endif