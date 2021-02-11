#ifndef CHARACTERMINIMALALLIANCEINFORMATIONS
#define CHARACTERMINIMALALLIANCEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GuildInformations.h"
#include "BasicAllianceInformations.h"
#include "AllianceInformations.h"
#include "CharacterMinimalGuildInformations.h"

class CharacterMinimalAllianceInformations : public CharacterMinimalGuildInformations {
public:
    BasicAllianceInformations alliance;
    unsigned int protocolId = 300;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterMinimalAllianceInformations(ICustomDataInput &input);
};

#endif