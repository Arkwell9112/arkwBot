#ifndef SKILLACTIONDESCRIPTIONCOLLECT
#define SKILLACTIONDESCRIPTIONCOLLECT

#include "../IO/ICustomDataInput.h"
#include "SkillActionDescriptionTimed.h"
#include "SkillActionDescription.h"

class SkillActionDescriptionCollect : public SkillActionDescriptionTimed {
public:
    unsigned int min = 0;
    unsigned int max = 0;
    unsigned int protocolId = 7961;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SkillActionDescriptionCollect(ICustomDataInput &input);

    void _minFunc(ICustomDataInput &input);

    void _maxFunc(ICustomDataInput &input);
};

#endif