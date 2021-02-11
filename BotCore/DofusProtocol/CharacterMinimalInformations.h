#ifndef CHARACTERMINIMALINFORMATIONS
#define CHARACTERMINIMALINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "CharacterBasicMinimalInformations.h"

class CharacterMinimalInformations : public CharacterBasicMinimalInformations {
public:
    unsigned int level = 0;
    unsigned int protocolId = 393;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterMinimalInformations(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);
};

#endif