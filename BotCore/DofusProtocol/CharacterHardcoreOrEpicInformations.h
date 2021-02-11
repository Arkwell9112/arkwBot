#ifndef CHARACTERHARDCOREOREPICINFORMATIONS
#define CHARACTERHARDCOREOREPICINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "CharacterBaseInformations.h"

class CharacterHardcoreOrEpicInformations : public CharacterBaseInformations {
public:
    unsigned int deathState = 0;
    unsigned int deathCount = 0;
    unsigned int deathMaxLevel = 0;
    unsigned int protocolId = 5330;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterHardcoreOrEpicInformations(ICustomDataInput &input);

    void _deathStateFunc(ICustomDataInput &input);

    void _deathCountFunc(ICustomDataInput &input);

    void _deathMaxLevelFunc(ICustomDataInput &input);
};

#endif