#ifndef BREACHINVITATIONRESPONSEMESSAGE
#define BREACHINVITATIONRESPONSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalInformations.h"

class BreachInvitationResponseMessage : public NetworkInterface {
public:
    CharacterMinimalInformations guest;
    bool accept = false;
    unsigned int protocolId = 8162;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachInvitationResponseMessage(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif