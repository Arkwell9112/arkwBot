#ifndef HUMANOPTIONOBJECTUSE
#define HUMANOPTIONOBJECTUSE

#include "../IO/ICustomDataInput.h"
#include "HumanOption.h"

class HumanOptionObjectUse : public HumanOption {
public:
    unsigned int delayTypeId = 0;
    double delayEndTime = 0;
    unsigned int objectGID = 0;
    unsigned int protocolId = 9970;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanOptionObjectUse(ICustomDataInput &input);

    void _delayTypeIdFunc(ICustomDataInput &input);

    void _delayEndTimeFunc(ICustomDataInput &input);

    void _objectGIDFunc(ICustomDataInput &input);
};

#endif