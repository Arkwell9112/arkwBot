#ifndef SETCHARACTERRESTRICTIONSMESSAGE
#define SETCHARACTERRESTRICTIONSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ActorRestrictionsInformations.h"

class SetCharacterRestrictionsMessage : public NetworkInterface {
public:
    double actorId = 0;
    ActorRestrictionsInformations restrictions;
    unsigned int protocolId = 7393;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SetCharacterRestrictionsMessage(ICustomDataInput &input);

    void _actorIdFunc(ICustomDataInput &input);
};

#endif