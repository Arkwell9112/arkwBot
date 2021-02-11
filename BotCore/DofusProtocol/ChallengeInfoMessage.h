#ifndef CHALLENGEINFOMESSAGE
#define CHALLENGEINFOMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChallengeInfoMessage : public NetworkInterface {
public:
    unsigned int challengeId = 0;
    double targetId = 0;
    unsigned int xpBonus = 0;
    unsigned int dropBonus = 0;
    unsigned int protocolId = 195;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChallengeInfoMessage(ICustomDataInput &input);

    void _challengeIdFunc(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _xpBonusFunc(ICustomDataInput &input);

    void _dropBonusFunc(ICustomDataInput &input);
};

#endif