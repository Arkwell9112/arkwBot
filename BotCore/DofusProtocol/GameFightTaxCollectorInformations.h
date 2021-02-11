#ifndef GAMEFIGHTTAXCOLLECTORINFORMATIONS
#define GAMEFIGHTTAXCOLLECTORINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "TaxCollectorInformations.h"
#include "GameFightAIInformations.h"

class GameFightTaxCollectorInformations : public GameFightAIInformations {
public:
    unsigned int firstNameId = 0;
    unsigned int lastNameId = 0;
    unsigned int level = 0;
    unsigned int protocolId = 8882;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightTaxCollectorInformations(ICustomDataInput &input);

    void _firstNameIdFunc(ICustomDataInput &input);

    void _lastNameIdFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);
};

#endif