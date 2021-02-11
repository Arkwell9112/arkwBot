#ifndef MAPRUNNINGFIGHTDETAILSMESSAGE
#define MAPRUNNINGFIGHTDETAILSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameFightFighterLightInformations.h"

class MapRunningFightDetailsMessage : public NetworkInterface {
public:
    unsigned int fightId = 0;
    std::vector<GameFightFighterLightInformations> attackers;
    std::vector<GameFightFighterLightInformations> defenders;
    unsigned int protocolId = 2045;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapRunningFightDetailsMessage(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _attackersFunc(ICustomDataInput &input);

    void _defendersFunc(ICustomDataInput &input);
};

#endif