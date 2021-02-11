#ifndef BREACHINVITATIONCLOSEMESSAGE
#define BREACHINVITATIONCLOSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalInformations.h"

class BreachInvitationCloseMessage : public NetworkInterface {
public:
    CharacterMinimalInformations host;
    unsigned int protocolId = 3909;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachInvitationCloseMessage(ICustomDataInput &input);
};

#endif