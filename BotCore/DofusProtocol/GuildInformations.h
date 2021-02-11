#ifndef GUILDINFORMATIONS
#define GUILDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "BasicGuildInformations.h"
#include "GuildEmblem.h"

class GuildInformations : public BasicGuildInformations {
public:
    GuildEmblem guildEmblem;
    unsigned int protocolId = 5897;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInformations(ICustomDataInput &input);
};

#endif