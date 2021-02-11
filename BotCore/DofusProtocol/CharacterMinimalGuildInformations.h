#ifndef CHARACTERMINIMALGUILDINFORMATIONS
#define CHARACTERMINIMALGUILDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "GuildInformations.h"
#include "BasicGuildInformations.h"
#include "CharacterMinimalPlusLookInformations.h"

class CharacterMinimalGuildInformations : public CharacterMinimalPlusLookInformations {
public:
    BasicGuildInformations guild;
    unsigned int protocolId = 3916;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterMinimalGuildInformations(ICustomDataInput &input);
};

#endif