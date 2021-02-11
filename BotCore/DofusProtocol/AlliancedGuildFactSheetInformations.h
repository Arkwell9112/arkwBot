#ifndef ALLIANCEDGUILDFACTSHEETINFORMATIONS
#define ALLIANCEDGUILDFACTSHEETINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GuildInformations.h"
#include "BasicNamedAllianceInformations.h"
#include "AllianceInformations.h"
#include "GuildFactSheetInformations.h"

class AlliancedGuildFactSheetInformations : public GuildInformations {
public:
    BasicNamedAllianceInformations allianceInfos;
    unsigned int protocolId = 8863;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlliancedGuildFactSheetInformations(ICustomDataInput &input);
};

#endif