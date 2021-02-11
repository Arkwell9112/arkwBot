#ifndef INTERACTIVEELEMENTWITHAGEBONUS
#define INTERACTIVEELEMENTWITHAGEBONUS

#include "../IO/ICustomDataInput.h"
#include "InteractiveElement.h"

class InteractiveElementWithAgeBonus : public InteractiveElement {
public:
    int ageBonus = 0;
    unsigned int protocolId = 4190;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveElementWithAgeBonus(ICustomDataInput &input);

    void _ageBonusFunc(ICustomDataInput &input);
};

#endif