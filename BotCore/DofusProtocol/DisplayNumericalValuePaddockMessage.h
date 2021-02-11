#ifndef DISPLAYNUMERICALVALUEPADDOCKMESSAGE
#define DISPLAYNUMERICALVALUEPADDOCKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class DisplayNumericalValuePaddockMessage : public NetworkInterface {
public:
    int rideId = 0;
    int value = 0;
    unsigned int type = 0;
    unsigned int protocolId = 4192;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DisplayNumericalValuePaddockMessage(ICustomDataInput &input);

    void _rideIdFunc(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif