#ifndef CHALLENGERESULTMESSAGE
#define CHALLENGERESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChallengeResultMessage : public NetworkInterface {
public:
    unsigned int challengeId = 0;
    bool success = false;
    unsigned int protocolId = 6105;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChallengeResultMessage(ICustomDataInput &input);

    void _challengeIdFunc(ICustomDataInput &input);

    void _successFunc(ICustomDataInput &input);
};

#endif