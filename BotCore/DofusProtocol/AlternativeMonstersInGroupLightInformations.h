#ifndef ALTERNATIVEMONSTERSINGROUPLIGHTINFORMATIONS
#define ALTERNATIVEMONSTERSINGROUPLIGHTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MonsterInGroupLightInformations.h"

class AlternativeMonstersInGroupLightInformations : public NetworkInterface {
public:
    int playerCount = 0;
    std::vector<MonsterInGroupLightInformations> monsters;
    unsigned int protocolId = 4329;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlternativeMonstersInGroupLightInformations(ICustomDataInput &input);

    void _playerCountFunc(ICustomDataInput &input);

    void _monstersFunc(ICustomDataInput &input);
};

#endif