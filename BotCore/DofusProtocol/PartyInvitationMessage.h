#ifndef PARTYINVITATIONMESSAGE
#define PARTYINVITATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "AbstractPartyMessage.h"

class PartyInvitationMessage : public AbstractPartyMessage {
public:
    unsigned int partyType = 0;
    std::string partyName;
    unsigned int maxParticipants = 0;
    double fromId = 0;
    std::string fromName;
    double toId = 0;
    unsigned int protocolId = 494;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyInvitationMessage(ICustomDataInput &input);

    void _partyTypeFunc(ICustomDataInput &input);

    void _partyNameFunc(ICustomDataInput &input);

    void _maxParticipantsFunc(ICustomDataInput &input);

    void _fromIdFunc(ICustomDataInput &input);

    void _fromNameFunc(ICustomDataInput &input);

    void _toIdFunc(ICustomDataInput &input);
};

#endif