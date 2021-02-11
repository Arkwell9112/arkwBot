#ifndef GAMEROLEPLAYNPCQUESTFLAG
#define GAMEROLEPLAYNPCQUESTFLAG

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GameRolePlayNpcQuestFlag : public NetworkInterface {
public:
    std::vector<unsigned int> questsToValidId;
    std::vector<unsigned int> questsToStartId;
    unsigned int protocolId = 123;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayNpcQuestFlag(ICustomDataInput &input);

    void _questsToValidIdFunc(ICustomDataInput &input);

    void _questsToStartIdFunc(ICustomDataInput &input);
};

#endif