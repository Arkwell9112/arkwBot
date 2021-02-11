#ifndef ENTITYLOOK
#define ENTITYLOOK

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class EntityLook : public NetworkInterface {
public:
    unsigned int bonesId = 0;
    std::vector<unsigned int> skins;
    std::vector<int> indexedColors;
    std::vector<int> scales;
    unsigned int protocolId = 2438;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EntityLook(ICustomDataInput &input);

    void _bonesIdFunc(ICustomDataInput &input);

    void _skinsFunc(ICustomDataInput &input);

    void _indexedColorsFunc(ICustomDataInput &input);

    void _scalesFunc(ICustomDataInput &input);

    void _subentitiesFunc(ICustomDataInput &input);
};

#endif