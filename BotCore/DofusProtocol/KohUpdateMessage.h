#ifndef KOHUPDATEMESSAGE
#define KOHUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "BasicAllianceInformations.h"
#include "AllianceInformations.h"

class KohUpdateMessage : public NetworkInterface {
public:
    std::vector<AllianceInformations> alliances;
    std::vector<unsigned int> allianceNbMembers;
    std::vector<unsigned int> allianceRoundWeigth;
    std::vector<unsigned int> allianceMatchScore;
    std::vector<BasicAllianceInformations> allianceMapWinners;
    unsigned int allianceMapWinnerScore = 0;
    unsigned int allianceMapMyAllianceScore = 0;
    double nextTickTime = 0;
    unsigned int protocolId = 7944;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_KohUpdateMessage(ICustomDataInput &input);

    void _alliancesFunc(ICustomDataInput &input);

    void _allianceNbMembersFunc(ICustomDataInput &input);

    void _allianceRoundWeigthFunc(ICustomDataInput &input);

    void _allianceMatchScoreFunc(ICustomDataInput &input);

    void _allianceMapWinnersFunc(ICustomDataInput &input);

    void _allianceMapWinnerScoreFunc(ICustomDataInput &input);

    void _allianceMapMyAllianceScoreFunc(ICustomDataInput &input);

    void _nextTickTimeFunc(ICustomDataInput &input);
};

#endif