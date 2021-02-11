#ifndef BREACHBRANCH
#define BREACHBRANCH

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MonsterInGroupLightInformations.h"

class BreachBranch : public NetworkInterface {
public:
    unsigned int room = 0;
    unsigned int element = 0;
    std::vector<MonsterInGroupLightInformations> bosses;
    double map = 0;
    int score = 0;
    int relativeScore = 0;
    std::vector<MonsterInGroupLightInformations> monsters;
    unsigned int protocolId = 1023;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachBranch(ICustomDataInput &input);

    void _roomFunc(ICustomDataInput &input);

    void _elementFunc(ICustomDataInput &input);

    void _bossesFunc(ICustomDataInput &input);

    void _mapFunc(ICustomDataInput &input);

    void _scoreFunc(ICustomDataInput &input);

    void _relativeScoreFunc(ICustomDataInput &input);

    void _monstersFunc(ICustomDataInput &input);
};

#endif