#ifndef BREACHINVITATIONREQUESTMESSAGE
#define BREACHINVITATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class BreachInvitationRequestMessage : public NetworkInterface {
public:
    std::vector<double> guests;
    unsigned int protocolId = 2307;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachInvitationRequestMessage(ICustomDataInput &input);

    void _guestsFunc(ICustomDataInput &input);
};

#endif