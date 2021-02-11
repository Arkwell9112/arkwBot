#ifndef ABSTRACTFIGHTTEAMINFORMATIONS
#define ABSTRACTFIGHTTEAMINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AbstractFightTeamInformations : public NetworkInterface {
public:
    unsigned int teamId = 2;
    double leaderId = 0;
    int teamSide = 0;
    unsigned int teamTypeId = 0;
    unsigned int nbWaves = 0;
    unsigned int protocolId = 6163;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractFightTeamInformations(ICustomDataInput &input);

    void _teamIdFunc(ICustomDataInput &input);

    void _leaderIdFunc(ICustomDataInput &input);

    void _teamSideFunc(ICustomDataInput &input);

    void _teamTypeIdFunc(ICustomDataInput &input);

    void _nbWavesFunc(ICustomDataInput &input);
};

#endif