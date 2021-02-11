#ifndef OBJECTEFFECTDURATION
#define OBJECTEFFECTDURATION

#include "../IO/ICustomDataInput.h"
#include "ObjectEffect.h"

class ObjectEffectDuration : public ObjectEffect {
public:
    unsigned int days = 0;
    unsigned int hours = 0;
    unsigned int minutes = 0;
    unsigned int protocolId = 3785;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffectDuration(ICustomDataInput &input);

    void _daysFunc(ICustomDataInput &input);

    void _hoursFunc(ICustomDataInput &input);

    void _minutesFunc(ICustomDataInput &input);
};

#endif