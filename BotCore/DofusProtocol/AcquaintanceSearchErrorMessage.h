#ifndef ACQUAINTANCESEARCHERRORMESSAGE
#define ACQUAINTANCESEARCHERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AcquaintanceSearchErrorMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 7420;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AcquaintanceSearchErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif