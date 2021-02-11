#ifndef CHARACTERBASICMINIMALINFORMATIONS
#define CHARACTERBASICMINIMALINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include <string>
#include "AbstractCharacterInformation.h"

class CharacterBasicMinimalInformations : public AbstractCharacterInformation {
public:
    std::string name;
    unsigned int protocolId = 8750;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterBasicMinimalInformations(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);
};

#endif