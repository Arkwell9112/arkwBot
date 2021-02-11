#ifndef MAPRUNNINGFIGHTDETAILSEXTENDEDMESSAGE
#define MAPRUNNINGFIGHTDETAILSEXTENDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "NamedPartyTeam.h"
#include "MapRunningFightDetailsMessage.h"

class MapRunningFightDetailsExtendedMessage : public MapRunningFightDetailsMessage {
public:
    std::vector<NamedPartyTeam> namedPartyTeams;
    unsigned int protocolId = 9731;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapRunningFightDetailsExtendedMessage(ICustomDataInput &input);

    void _namedPartyTeamsFunc(ICustomDataInput &input);
};

#endif