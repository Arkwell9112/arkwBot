#ifndef AUTHENTICATIONTICKETACCEPTEDMESSAGE
#define AUTHENTICATIONTICKETACCEPTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AuthenticationTicketAcceptedMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3983;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AuthenticationTicketAcceptedMessage(ICustomDataInput &input);
};

#endif