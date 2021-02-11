#ifndef GUILDFACTSHEETINFORMATIONS
#define GUILDFACTSHEETINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GuildInformations.h"

class GuildFactSheetInformations : public GuildInformations {
public:
    double leaderId = 0;
    unsigned int nbMembers = 0;
    unsigned int protocolId = 9794;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildFactSheetInformations(ICustomDataInput &input);

    void _leaderIdFunc(ICustomDataInput &input);

    void _nbMembersFunc(ICustomDataInput &input);
};

#endif