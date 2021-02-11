#ifndef AUTHENTICATIONTICKETMESSAGE
#define AUTHENTICATIONTICKETMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class AuthenticationTicketMessage : public NetworkInterface {
public:
    std::string lang;
    std::string ticket;
    unsigned int protocolId = 8624;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AuthenticationTicketMessage(ICustomDataInput &input);

    void _langFunc(ICustomDataInput &input);

    void _ticketFunc(ICustomDataInput &input);
};

#endif