#ifndef ALLIANCEFACTSMESSAGE
#define ALLIANCEFACTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>
#include "GuildInAllianceInformations.h"
#include "AllianceInformations.h"
#include "AllianceFactSheetInformations.h"

class AllianceFactsMessage : public NetworkInterface {
public:
    AllianceFactSheetInformations infos;
    std::vector<GuildInAllianceInformations> guilds;
    std::vector<unsigned int> controlledSubareaIds;
    double leaderCharacterId = 0;
    std::string leaderCharacterName;
    unsigned int protocolId = 5367;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceFactsMessage(ICustomDataInput &input);

    void _guildsFunc(ICustomDataInput &input);

    void _controlledSubareaIdsFunc(ICustomDataInput &input);

    void _leaderCharacterIdFunc(ICustomDataInput &input);

    void _leaderCharacterNameFunc(ICustomDataInput &input);
};

#endif