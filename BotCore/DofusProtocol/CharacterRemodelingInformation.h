#ifndef CHARACTERREMODELINGINFORMATION
#define CHARACTERREMODELINGINFORMATION

#include "../IO/ICustomDataInput.h"
#include <vector>
#include <string>
#include "RemodelingInformation.h"
#include "AbstractCharacterInformation.h"

class CharacterRemodelingInformation : public AbstractCharacterInformation {
public:
    std::string name;
    int breed = 0;
    bool sex = false;
    unsigned int cosmeticId = 0;
    std::vector<int> colors;
    unsigned int protocolId = 9208;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterRemodelingInformation(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _cosmeticIdFunc(ICustomDataInput &input);

    void _colorsFunc(ICustomDataInput &input);
};

#endif