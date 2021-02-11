#ifndef INVITEINHAVENBAGCLOSEDMESSAGE
#define INVITEINHAVENBAGCLOSEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalInformations.h"

class InviteInHavenBagClosedMessage : public NetworkInterface {
public:
    CharacterMinimalInformations hostInformations;
    unsigned int protocolId = 2991;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InviteInHavenBagClosedMessage(ICustomDataInput &input);
};

#endif