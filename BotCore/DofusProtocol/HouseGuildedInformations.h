#ifndef HOUSEGUILDEDINFORMATIONS
#define HOUSEGUILDEDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GuildInformations.h"
#include "HouseInstanceInformations.h"

class HouseGuildedInformations : public HouseInstanceInformations {
public:
    GuildInformations guildInfo;
    unsigned int protocolId = 3647;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseGuildedInformations(ICustomDataInput &input);
};

#endif