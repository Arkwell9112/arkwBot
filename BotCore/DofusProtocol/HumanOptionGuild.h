#ifndef HUMANOPTIONGUILD
#define HUMANOPTIONGUILD

#include "../IO/ICustomDataInput.h"
#include "HumanOption.h"
#include "GuildInformations.h"

class HumanOptionGuild : public HumanOption {
public:
    GuildInformations guildInformations;
    unsigned int protocolId = 5005;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanOptionGuild(ICustomDataInput &input);
};

#endif