#ifndef GAMEDATAPLAYFARMOBJECTANIMATIONMESSAGE
#define GAMEDATAPLAYFARMOBJECTANIMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GameDataPlayFarmObjectAnimationMessage : public NetworkInterface {
public:
    std::vector<unsigned int> cellId;
    unsigned int protocolId = 7684;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameDataPlayFarmObjectAnimationMessage(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif