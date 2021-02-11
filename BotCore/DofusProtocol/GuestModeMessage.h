#ifndef GUESTMODEMESSAGE
#define GUESTMODEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuestModeMessage : public NetworkInterface {
public:
    bool active = false;
    unsigned int protocolId = 4831;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuestModeMessage(ICustomDataInput &input);

    void _activeFunc(ICustomDataInput &input);
};

#endif