#ifndef INTERACTIVEELEMENT
#define INTERACTIVEELEMENT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "InteractiveElementSkill.h"

class InteractiveElement : public NetworkInterface {
public:
    unsigned int elementId = 0;
    int elementTypeId = 0;
    std::vector<InteractiveElementSkill> enabledSkills;
    std::vector<InteractiveElementSkill> disabledSkills;
    bool onCurrentMap = false;
    unsigned int protocolId = 4976;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveElement(ICustomDataInput &input);

    void _elementIdFunc(ICustomDataInput &input);

    void _elementTypeIdFunc(ICustomDataInput &input);

    void _enabledSkillsFunc(ICustomDataInput &input);

    void _disabledSkillsFunc(ICustomDataInput &input);

    void _onCurrentMapFunc(ICustomDataInput &input);
};

#endif