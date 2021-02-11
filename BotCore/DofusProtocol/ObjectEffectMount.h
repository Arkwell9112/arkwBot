#ifndef OBJECTEFFECTMOUNT
#define OBJECTEFFECTMOUNT

#include "../IO/ICustomDataInput.h"
#include <vector>
#include <string>
#include "ObjectEffectInteger.h"
#include "ObjectEffect.h"

class ObjectEffectMount : public ObjectEffect {
public:
    double id = 0;
    double expirationDate = 0;
    unsigned int model = 0;
    std::string name;
    std::string owner;
    unsigned int level = 0;
    bool sex = false;
    bool isRideable = false;
    bool isFeconded = false;
    bool isFecondationReady = false;
    int reproductionCount = 0;
    unsigned int reproductionCountMax = 0;
    std::vector<ObjectEffectInteger> effects;
    std::vector<unsigned int> capacities;
    unsigned int protocolId = 6975;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffectMount(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _expirationDateFunc(ICustomDataInput &input);

    void _modelFunc(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _ownerFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);

    void _reproductionCountFunc(ICustomDataInput &input);

    void _reproductionCountMaxFunc(ICustomDataInput &input);

    void _effectsFunc(ICustomDataInput &input);

    void _capacitiesFunc(ICustomDataInput &input);
};

#endif