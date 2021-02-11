#ifndef MONSTERINGROUPLIGHTINFORMATIONS
#define MONSTERINGROUPLIGHTINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MonsterInGroupLightInformations : public NetworkInterface {
public:
    int genericId = 0;
    unsigned int grade = 0;
    unsigned int level = 0;
    unsigned int protocolId = 2648;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MonsterInGroupLightInformations(ICustomDataInput &input);

    void _genericIdFunc(ICustomDataInput &input);

    void _gradeFunc(ICustomDataInput &input);

    void _levelFunc(ICustomDataInput &input);
};

#endif