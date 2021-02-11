#ifndef INVITEINHAVENBAGOFFERMESSAGE
#define INVITEINHAVENBAGOFFERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalInformations.h"

class InviteInHavenBagOfferMessage : public NetworkInterface {
public:
    CharacterMinimalInformations hostInformations;
    int timeLeftBeforeCancel = 0;
    unsigned int protocolId = 2217;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InviteInHavenBagOfferMessage(ICustomDataInput &input);

    void _timeLeftBeforeCancelFunc(ICustomDataInput &input);
};

#endif