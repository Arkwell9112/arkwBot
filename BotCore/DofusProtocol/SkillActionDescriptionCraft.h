#ifndef SKILLACTIONDESCRIPTIONCRAFT
#define SKILLACTIONDESCRIPTIONCRAFT

#include "../IO/ICustomDataInput.h"
#include "SkillActionDescription.h"

class SkillActionDescriptionCraft : public SkillActionDescription {
public:
    unsigned int probability = 0;
    unsigned int protocolId = 8200;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SkillActionDescriptionCraft(ICustomDataInput &input);

    void _probabilityFunc(ICustomDataInput &input);
};

#endif