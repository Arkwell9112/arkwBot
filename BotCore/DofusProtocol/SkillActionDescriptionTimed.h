#ifndef SKILLACTIONDESCRIPTIONTIMED
#define SKILLACTIONDESCRIPTIONTIMED

#include "../IO/ICustomDataInput.h"
#include "SkillActionDescription.h"

class SkillActionDescriptionTimed : public SkillActionDescription {
public:
    unsigned int time = 0;
    unsigned int protocolId = 7758;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SkillActionDescriptionTimed(ICustomDataInput &input);

    void _timeFunc(ICustomDataInput &input);
};

#endif