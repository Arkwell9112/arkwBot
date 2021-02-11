#ifndef PARTYLOCATEMEMBERSREQUESTMESSAGE
#define PARTYLOCATEMEMBERSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyLocateMembersRequestMessage : public AbstractPartyMessage {
public:
    unsigned int protocolId = 5851;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyLocateMembersRequestMessage(ICustomDataInput &input);
};

#endif