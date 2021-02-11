#ifndef CHALLENGETARGETSLISTREQUESTMESSAGE
#define CHALLENGETARGETSLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChallengeTargetsListRequestMessage : public NetworkInterface {
public:
    unsigned int challengeId = 0;
    unsigned int protocolId = 2958;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChallengeTargetsListRequestMessage(ICustomDataInput &input);

    void _challengeIdFunc(ICustomDataInput &input);
};

#endif