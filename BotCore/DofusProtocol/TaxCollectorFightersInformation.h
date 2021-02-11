#ifndef TAXCOLLECTORFIGHTERSINFORMATION
#define TAXCOLLECTORFIGHTERSINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "CharacterMinimalPlusLookInformations.h"

class TaxCollectorFightersInformation : public NetworkInterface {
public:
    double collectorId = 0;
    std::vector<CharacterMinimalPlusLookInformations> allyCharactersInformations;
    std::vector<CharacterMinimalPlusLookInformations> enemyCharactersInformations;
    unsigned int protocolId = 7751;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorFightersInformation(ICustomDataInput &input);

    void _collectorIdFunc(ICustomDataInput &input);

    void _allyCharactersInformationsFunc(ICustomDataInput &input);

    void _enemyCharactersInformationsFunc(ICustomDataInput &input);
};

#endif