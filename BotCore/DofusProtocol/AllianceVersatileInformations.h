#ifndef ALLIANCEVERSATILEINFORMATIONS
#define ALLIANCEVERSATILEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AllianceVersatileInformations : public NetworkInterface {
public:
    unsigned int allianceId = 0;
    unsigned int nbGuilds = 0;
    unsigned int nbMembers = 0;
    unsigned int nbSubarea = 0;
    unsigned int protocolId = 7194;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceVersatileInformations(ICustomDataInput &input);

    void _allianceIdFunc(ICustomDataInput &input);

    void _nbGuildsFunc(ICustomDataInput &input);

    void _nbMembersFunc(ICustomDataInput &input);

    void _nbSubareaFunc(ICustomDataInput &input);
};

#endif