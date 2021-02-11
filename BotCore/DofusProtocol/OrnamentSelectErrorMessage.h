#ifndef ORNAMENTSELECTERRORMESSAGE
#define ORNAMENTSELECTERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class OrnamentSelectErrorMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 7603;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_OrnamentSelectErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif