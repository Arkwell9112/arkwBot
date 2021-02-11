#ifndef CHARACTERMINIMALGUILDPUBLICINFORMATIONS
#define CHARACTERMINIMALGUILDPUBLICINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "CharacterMinimalInformations.h"

class CharacterMinimalGuildPublicInformations : public CharacterMinimalInformations {
public:
    unsigned int rank = 0;
    unsigned int protocolId = 6767;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterMinimalGuildPublicInformations(ICustomDataInput &input);

    void _rankFunc(ICustomDataInput &input);
};

#endif