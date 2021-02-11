#ifndef GAMEFIGHTSPECTATORJOINMESSAGE
#define GAMEFIGHTSPECTATORJOINMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "NamedPartyTeam.h"
#include "GameFightJoinMessage.h"

class GameFightSpectatorJoinMessage : public GameFightJoinMessage {
public:
    std::vector<NamedPartyTeam> namedPartyTeams;
    unsigned int protocolId = 441;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightSpectatorJoinMessage(ICustomDataInput &input);

    void _namedPartyTeamsFunc(ICustomDataInput &input);
};

#endif