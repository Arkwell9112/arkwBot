#ifndef ALLIANCEINSIDERINFOMESSAGE
#define ALLIANCEINSIDERINFOMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GuildInsiderFactSheetInformations.h"
#include "AllianceFactSheetInformations.h"
#include "PrismSubareaEmptyInfo.h"

class AllianceInsiderInfoMessage : public NetworkInterface {
public:
    AllianceFactSheetInformations allianceInfos;
    std::vector<GuildInsiderFactSheetInformations> guilds;
    std::vector<PrismSubareaEmptyInfo> prisms;
    unsigned int protocolId = 3073;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceInsiderInfoMessage(ICustomDataInput &input);

    void _guildsFunc(ICustomDataInput &input);

    void _prismsFunc(ICustomDataInput &input);
};

#endif