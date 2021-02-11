#ifndef CHALLENGETARGETUPDATEMESSAGE
#define CHALLENGETARGETUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChallengeTargetUpdateMessage : public NetworkInterface {
public:
    unsigned int challengeId = 0;
    double targetId = 0;
    unsigned int protocolId = 8173;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChallengeTargetUpdateMessage(ICustomDataInput &input);

    void _challengeIdFunc(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);
};

#endif