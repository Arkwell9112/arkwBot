#ifndef IGNOREDDELETEREQUESTMESSAGE
#define IGNOREDDELETEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class IgnoredDeleteRequestMessage : public NetworkInterface {
public:
    unsigned int accountId = 0;
    bool session = false;
    unsigned int protocolId = 2594;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IgnoredDeleteRequestMessage(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);

    void _sessionFunc(ICustomDataInput &input);
};

#endif