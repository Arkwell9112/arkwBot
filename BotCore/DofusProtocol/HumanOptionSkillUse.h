#ifndef HUMANOPTIONSKILLUSE
#define HUMANOPTIONSKILLUSE

#include "../IO/ICustomDataInput.h"
#include "HumanOption.h"

class HumanOptionSkillUse : public HumanOption {
public:
    unsigned int elementId = 0;
    unsigned int skillId = 0;
    double skillEndTime = 0;
    unsigned int protocolId = 1429;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanOptionSkillUse(ICustomDataInput &input);

    void _elementIdFunc(ICustomDataInput &input);

    void _skillIdFunc(ICustomDataInput &input);

    void _skillEndTimeFunc(ICustomDataInput &input);
};

#endif