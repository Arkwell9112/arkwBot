#ifndef PARTYLOCATEMEMBERSMESSAGE
#define PARTYLOCATEMEMBERSMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "PartyMemberGeoPosition.h"
#include "AbstractPartyMessage.h"

class PartyLocateMembersMessage : public AbstractPartyMessage {
public:
    std::vector<PartyMemberGeoPosition> geopositions;
    unsigned int protocolId = 4043;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyLocateMembersMessage(ICustomDataInput &input);

    void _geopositionsFunc(ICustomDataInput &input);
};

#endif