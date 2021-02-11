#ifndef BASICTIMEMESSAGE
#define BASICTIMEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicTimeMessage : public NetworkInterface {
public:
    double timestamp = 0;
    int timezoneOffset = 0;
    unsigned int protocolId = 7605;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicTimeMessage(ICustomDataInput &input);

    void _timestampFunc(ICustomDataInput &input);

    void _timezoneOffsetFunc(ICustomDataInput &input);
};

#endif