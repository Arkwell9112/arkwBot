#ifndef GAMEFIGHTFIGHTERTAXCOLLECTORLIGHTINFORMATIONS
#define GAMEFIGHTFIGHTERTAXCOLLECTORLIGHTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GameFightFighterLightInformations.h"

class GameFightFighterTaxCollectorLightInformations : public GameFightFighterLightInformations {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    unsigned int protocolId = 5566;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightFighterTaxCollectorLightInformations(ICustomDataInput &input);

    void _firstNameIdFunc(ICustomDataInput &input);

    void _lastNameIdFunc(ICustomDataInput &input);
};

#endif