#ifndef BASICGUILDINFORMATIONS
#define BASICGUILDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "AbstractSocialGroupInfos.h"

class BasicGuildInformations : public AbstractSocialGroupInfos {
public:
    unsigned int guildId = 0;
    std::string guildName;
    unsigned int guildLevel = 0;
    unsigned int protocolId = 4801;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicGuildInformations(ICustomDataInput &input);

    void _guildIdFunc(ICustomDataInput &input);

    void _guildNameFunc(ICustomDataInput &input);

    void _guildLevelFunc(ICustomDataInput &input);
};

#endif