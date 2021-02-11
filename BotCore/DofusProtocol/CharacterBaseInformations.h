#ifndef CHARACTERBASEINFORMATIONS
#define CHARACTERBASEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "CharacterMinimalPlusLookInformations.h"

class CharacterBaseInformations : public CharacterMinimalPlusLookInformations {
public:
    bool sex = false;
    unsigned int protocolId = 9272;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterBaseInformations(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);
};

#endif