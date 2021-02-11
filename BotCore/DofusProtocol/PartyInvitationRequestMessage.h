#ifndef PARTYINVITATIONREQUESTMESSAGE
#define PARTYINVITATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class PartyInvitationRequestMessage : public NetworkInterface {
public:
    std::string name;
    unsigned int protocolId = 8942;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationRequestMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif