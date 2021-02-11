#ifndef ALLIANCEINFORMATIONS
#define ALLIANCEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "BasicNamedAllianceInformations.h"
#include "GuildEmblem.h"

class AllianceInformations : public BasicNamedAllianceInformations {
public:
    GuildEmblem allianceEmblem;
    unsigned int protocolId = 9961;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceInformations(ICustomDataInput &input);
};

#endif