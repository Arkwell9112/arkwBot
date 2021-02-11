#ifndef SPAWNCHARACTERINFORMATION
#define SPAWNCHARACTERINFORMATION

#include "../IO/ICustomDataInput.h"
#include <string>
#include "SpawnInformation.h"

class SpawnCharacterInformation : public SpawnInformation {
public:
    std::string name;
    unsigned int level = 0;
    unsigned int protocolId = 5264;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SpawnCharacterInformation(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);
};

#endif