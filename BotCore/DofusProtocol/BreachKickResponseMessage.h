#ifndef BREACHKICKRESPONSEMESSAGE
#define BREACHKICKRESPONSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterMinimalInformations.h"

class BreachKickResponseMessage : public NetworkInterface {
public:
    CharacterMinimalInformations target;
    bool kicked = false;
    unsigned int protocolId = 4239;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachKickResponseMessage(ICustomDataInput &input);

    void _kickedFunc(ICustomDataInput &input);
};

#endif