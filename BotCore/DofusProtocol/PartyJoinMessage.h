#ifndef PARTYJOINMESSAGE
#define PARTYJOINMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include <string>
#include "PartyMemberInformations.h"
#include "PartyGuestInformations.h"
#include "AbstractPartyMessage.h"

class PartyJoinMessage : public AbstractPartyMessage {
public:
    unsigned int partyType = 0;
    double partyLeaderId = 0;
    unsigned int maxParticipants = 0;
    std::vector<PartyMemberInformations> members;
    std::vector<PartyGuestInformations> guests;
    bool restricted = false;
    std::string partyName;
    unsigned int protocolId = 467;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyJoinMessage(ICustomDataInput &input);

    void _partyTypeFunc(ICustomDataInput &input);

    void _partyLeaderIdFunc(ICustomDataInput &input);

    void _maxParticipantsFunc(ICustomDataInput &input);

    void _membersFunc(ICustomDataInput &input);

    void _guestsFunc(ICustomDataInput &input);

    void _restrictedFunc(ICustomDataInput &input);

    void _partyNameFunc(ICustomDataInput &input);
};

#endif