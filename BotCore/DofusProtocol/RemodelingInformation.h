#ifndef REMODELINGINFORMATION
#define REMODELINGINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class RemodelingInformation : public NetworkInterface {
public:
    std::string name;
    int breed = 0;
    bool sex = false;
    unsigned int cosmeticId = 0;
    std::vector<int> colors;
    unsigned int protocolId = 8502;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_RemodelingInformation(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _breedFunc(ICustomDataInput &input);

    void _sexFunc(ICustomDataInput &input);

    void _cosmeticIdFunc(ICustomDataInput &input);

    void _colorsFunc(ICustomDataInput &input);
};

#endif