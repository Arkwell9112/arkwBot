#ifndef OBJECTEFFECTDATE
#define OBJECTEFFECTDATE

#include "../IO/ICustomDataInput.h"
#include "ObjectEffect.h"

class ObjectEffectDate : public ObjectEffect {
public:
    unsigned int year = 0;
    unsigned int month = 0;
    unsigned int day = 0;
    unsigned int hour = 0;
    unsigned int minute = 0;
    unsigned int protocolId = 5410;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectEffectDate(ICustomDataInput &input);

    void _yearFunc(ICustomDataInput &input);

    void _monthFunc(ICustomDataInput &input);

    void _dayFunc(ICustomDataInput &input);

    void _hourFunc(ICustomDataInput &input);

    void _minuteFunc(ICustomDataInput &input);
};

#endif