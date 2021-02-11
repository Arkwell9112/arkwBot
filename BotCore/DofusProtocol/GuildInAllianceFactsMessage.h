#ifndef GUILDINALLIANCEFACTSMESSAGE
#define GUILDINALLIANCEFACTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "BasicNamedAllianceInformations.h"
#include "AllianceInformations.h"
#include "GuildFactsMessage.h"
#include "AllianceFactsMessage.h"

class GuildInAllianceFactsMessage : public GuildFactsMessage {
public:
    BasicNamedAllianceInformations allianceInfos;
    unsigned int protocolId = 955;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInAllianceFactsMessage(ICustomDataInput &input);
};

#endif