#ifndef GAMEROLEPLAYSHOWCHALLENGEMESSAGE
#define GAMEROLEPLAYSHOWCHALLENGEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "FightCommonInformations.h"

class GameRolePlayShowChallengeMessage : public NetworkInterface {
public:
    FightCommonInformations commonsInfos;
    unsigned int protocolId = 9281;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameRolePlayShowChallengeMessage(ICustomDataInput &input);
};

#endif