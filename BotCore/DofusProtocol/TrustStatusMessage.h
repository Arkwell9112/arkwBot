#ifndef TRUSTSTATUSMESSAGE
#define TRUSTSTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TrustStatusMessage : public NetworkInterface {
public:
    bool trusted = false;
    bool certified = false;
    unsigned int protocolId = 4536;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TrustStatusMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);
};

#endif