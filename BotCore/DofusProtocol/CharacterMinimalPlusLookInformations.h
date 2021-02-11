#ifndef CHARACTERMINIMALPLUSLOOKINFORMATIONS
#define CHARACTERMINIMALPLUSLOOKINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "EntityLook.h"
#include "CharacterMinimalInformations.h"

class CharacterMinimalPlusLookInformations : public CharacterMinimalInformations {
public:
    EntityLook entityLook;
    int breed = 0;
    unsigned int protocolId = 9017;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterMinimalPlusLookInformations(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);
};

#endif