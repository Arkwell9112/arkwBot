#ifndef CHARACTERCREATIONREQUESTMESSAGE
#define CHARACTERCREATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class CharacterCreationRequestMessage : public NetworkInterface {
public:
    std::string name;
    int breed = 0;
    bool sex = false;
    std::vector<int> colors;
    unsigned int cosmeticId = 0;
    unsigned int protocolId = 2210;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterCreationRequestMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _colorsFunc(ICustomDataInput &input);

    void _cosmeticIdFunc(ICustomDataInput &input);
};

#endif