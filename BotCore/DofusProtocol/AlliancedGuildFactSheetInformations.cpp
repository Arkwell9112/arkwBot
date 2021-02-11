#include "AlliancedGuildFactSheetInformations.h"

void AlliancedGuildFactSheetInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlliancedGuildFactSheetInformations(input);
}

void AlliancedGuildFactSheetInformations::deserializeAs_AlliancedGuildFactSheetInformations(ICustomDataInput &input) {
    GuildInformations::deserialize(input);
    this->allianceInfos.deserialize(input);
}

