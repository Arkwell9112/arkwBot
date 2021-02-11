#ifndef BREACHTELEPORTRESPONSEMESSAGE
#define BREACHTELEPORTRESPONSEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachTeleportResponseMessage : public NetworkInterface {
public:
    bool teleported = false;
    unsigned int protocolId = 6210;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachTeleportResponseMessage(ICustomDataInput &input);

    void _teleportedFunc(ICustomDataInput &input);
};

#endif