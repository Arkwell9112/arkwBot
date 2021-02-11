#ifndef PARTYINVITATIONDETAILSMESSAGE
#define PARTYINVITATIONDETAILSMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include <string>
#include "PartyInvitationMemberInformations.h"
#include "PartyGuestInformations.h"
#include "AbstractPartyMessage.h"

class PartyInvitationDetailsMessage : public AbstractPartyMessage {
public:
    unsigned int partyType = 0;
    std::string partyName;
    double fromId = 0;
    std::string fromName;
    double leaderId = 0;
    std::vector<PartyInvitationMemberInformations> members;
    std::vector<PartyGuestInformations> guests;
    unsigned int protocolId = 4907;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationDetailsMessage(ICustomDataInput &input);

    void _partyTypeFunc(ICustomDataInput &input);

    void _partyNameFunc(ICustomDataInput &input);

    void _fromIdFunc(ICustomDataInput &input);

    void _fromNameFunc(ICustomDataInput &input);

    void _leaderIdFunc(ICustomDataInput &input);

    void _membersFunc(ICustomDataInput &input);

    void _guestsFunc(ICustomDataInput &input);
};

#endif