#ifndef GUILDINSIDERFACTSHEETINFORMATIONS
#define GUILDINSIDERFACTSHEETINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "GuildFactSheetInformations.h"

class GuildInsiderFactSheetInformations : public GuildFactSheetInformations {
public:
    std::string leaderName;
    unsigned int nbConnectedMembers = 0;
    unsigned int nbTaxCollectors = 0;
    unsigned int lastActivity = 0;
    unsigned int protocolId = 9940;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInsiderFactSheetInformations(ICustomDataInput &input);

    void _leaderNameFunc(ICustomDataInput &input);

    void _nbConnectedMembersFunc(ICustomDataInput &input);

    void _nbTaxCollectorsFunc(ICustomDataInput &input);

    void _lastActivityFunc(ICustomDataInput &input);
};

#endif