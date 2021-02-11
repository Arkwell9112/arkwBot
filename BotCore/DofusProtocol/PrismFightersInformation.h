#ifndef PRISMFIGHTERSINFORMATION
#define PRISMFIGHTERSINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ProtectedEntityWaitingForHelpInfo.h"
#include "CharacterMinimalPlusLookInformations.h"

class PrismFightersInformation : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    ProtectedEntityWaitingForHelpInfo waitingForHelpInfo;
    std::vector<CharacterMinimalPlusLookInformations> allyCharactersInformations;
    std::vector<CharacterMinimalPlusLookInformations> enemyCharactersInformations;
    unsigned int protocolId = 8928;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismFightersInformation(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _allyCharactersInformationsFunc(ICustomDataInput &input);

    void _enemyCharactersInformationsFunc(ICustomDataInput &input);
};

#endif