#ifndef NAMEDPARTYTEAMWITHOUTCOME
#define NAMEDPARTYTEAMWITHOUTCOME

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "NamedPartyTeam.h"

class NamedPartyTeamWithOutcome : public NetworkInterface {
public:
    NamedPartyTeam team;
    unsigned int outcome = 0;
    unsigned int protocolId = 9333;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NamedPartyTeamWithOutcome(ICustomDataInput &input);

    void _outcomeFunc(ICustomDataInput &input);
};

#endif