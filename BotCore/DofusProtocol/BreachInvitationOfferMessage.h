#ifndef BREACHINVITATIONOFFERMESSAGE
#define BREACHINVITATIONOFFERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalInformations.h"

class BreachInvitationOfferMessage : public NetworkInterface {
public:
    CharacterMinimalInformations host;
    unsigned int timeLeftBeforeCancel = 0;
    unsigned int protocolId = 5569;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachInvitationOfferMessage(ICustomDataInput &input);

    void _timeLeftBeforeCancelFunc(ICustomDataInput &input);
};

#endif