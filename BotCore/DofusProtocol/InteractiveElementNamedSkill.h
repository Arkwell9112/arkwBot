#ifndef INTERACTIVEELEMENTNAMEDSKILL
#define INTERACTIVEELEMENTNAMEDSKILL

#include "../IO/ICustomDataInput.h"
#include "InteractiveElementSkill.h"
#include "InteractiveElement.h"

class InteractiveElementNamedSkill : public InteractiveElementSkill {
public:
    unsigned int nameId = 0;
    unsigned int protocolId = 7588;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveElementNamedSkill(ICustomDataInput &input);

    void _nameIdFunc(ICustomDataInput &input);
};

#endif