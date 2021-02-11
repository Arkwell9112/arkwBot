#ifndef GAMEREFRESHMONSTERBOOSTSMESSAGE
#define GAMEREFRESHMONSTERBOOSTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "MonsterBoosts.h"

class GameRefreshMonsterBoostsMessage : public NetworkInterface {
public:
    std::vector<MonsterBoosts> monsterBoosts;
    std::vector<MonsterBoosts> familyBoosts;
    unsigned int protocolId = 1461;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRefreshMonsterBoostsMessage(ICustomDataInput &input);

    void _monsterBoostsFunc(ICustomDataInput &input);

    void _familyBoostsFunc(ICustomDataInput &input);
};

#endif