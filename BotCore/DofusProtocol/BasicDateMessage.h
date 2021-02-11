#ifndef BASICDATEMESSAGE
#define BASICDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicDateMessage : public NetworkInterface {
public:
    unsigned int day = 0;
    unsigned int month = 0;
    unsigned int year = 0;
    unsigned int protocolId = 6738;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicDateMessage(ICustomDataInput &input);

    void _dayFunc(ICustomDataInput &input);

    void _monthFunc(ICustomDataInput &input);

    void _yearFunc(ICustomDataInput &input);
};

#endif