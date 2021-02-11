#ifndef PADDOCKGUILDEDINFORMATIONS
#define PADDOCKGUILDEDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GuildInformations.h"
#include "PaddockBuyableInformations.h"

class PaddockGuildedInformations : public PaddockBuyableInformations {
public:
    bool deserted = false;
    GuildInformations guildInfo;
    unsigned int protocolId = 355;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockGuildedInformations(ICustomDataInput &input);

    void _desertedFunc(ICustomDataInput &input);
};

#endif