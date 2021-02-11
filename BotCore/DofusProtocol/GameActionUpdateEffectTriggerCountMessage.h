#ifndef GAMEACTIONUPDATEEFFECTTRIGGERCOUNTMESSAGE
#define GAMEACTIONUPDATEEFFECTTRIGGERCOUNTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GameFightEffectTriggerCount.h"

class GameActionUpdateEffectTriggerCountMessage : public NetworkInterface {
public:
    std::vector<GameFightEffectTriggerCount> targetIds;
    unsigned int protocolId = 4962;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionUpdateEffectTriggerCountMessage(ICustomDataInput &input);

    void _targetIdsFunc(ICustomDataInput &input);
};

#endif