#ifndef SKILLACTIONDESCRIPTION
#define SKILLACTIONDESCRIPTION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class SkillActionDescription : public NetworkInterface {
public:
    unsigned int skillId = 0;
    unsigned int protocolId = 3206;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SkillActionDescription(ICustomDataInput &input);

    void _skillIdFunc(ICustomDataInput &input);
};

#endif