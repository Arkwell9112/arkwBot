#ifndef INVITEINHAVENBAGMESSAGE
#define INVITEINHAVENBAGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalInformations.h"

class InviteInHavenBagMessage : public NetworkInterface {
public:
    CharacterMinimalInformations guestInformations;
    bool accept = false;
    unsigned int protocolId = 2172;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InviteInHavenBagMessage(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif