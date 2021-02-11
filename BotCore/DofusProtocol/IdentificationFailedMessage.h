#ifndef IDENTIFICATIONFAILEDMESSAGE
#define IDENTIFICATIONFAILEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class IdentificationFailedMessage : public NetworkInterface {
public:
    unsigned int reason = 99;
    unsigned int protocolId = 9617;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdentificationFailedMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif