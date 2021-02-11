#ifndef AUTHENTICATIONTICKETREFUSEDMESSAGE
#define AUTHENTICATIONTICKETREFUSEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AuthenticationTicketRefusedMessage : public NetworkInterface {
public:
    unsigned int protocolId = 859;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AuthenticationTicketRefusedMessage(ICustomDataInput &input);
};

#endif