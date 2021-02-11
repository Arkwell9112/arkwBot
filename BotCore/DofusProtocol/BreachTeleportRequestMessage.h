#ifndef BREACHTELEPORTREQUESTMESSAGE
#define BREACHTELEPORTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "TeleportRequestMessage.h"

class BreachTeleportRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4479;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachTeleportRequestMessage(ICustomDataInput &input);
};

#endif