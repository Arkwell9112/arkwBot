#ifndef CHARACTERTOREMODELINFORMATIONS
#define CHARACTERTOREMODELINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "RemodelingInformation.h"
#include "CharacterRemodelingInformation.h"

class CharacterToRemodelInformations : public CharacterRemodelingInformation {
public:
    unsigned int possibleChangeMask = 0;
    unsigned int mandatoryChangeMask = 0;
    unsigned int protocolId = 2827;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterToRemodelInformations(ICustomDataInput &input);

    void _possibleChangeMaskFunc(ICustomDataInput &input);

    void _mandatoryChangeMaskFunc(ICustomDataInput &input);
};

#endif