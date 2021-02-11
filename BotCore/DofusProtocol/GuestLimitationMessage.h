#ifndef GUESTLIMITATIONMESSAGE
#define GUESTLIMITATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GuestLimitationMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 5914;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuestLimitationMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif