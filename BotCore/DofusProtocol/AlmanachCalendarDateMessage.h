#ifndef ALMANACHCALENDARDATEMESSAGE
#define ALMANACHCALENDARDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AlmanachCalendarDateMessage : public NetworkInterface {
public:
    int date = 0;
    unsigned int protocolId = 9541;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlmanachCalendarDateMessage(ICustomDataInput &input);

    void _dateFunc(ICustomDataInput &input);
};

#endif