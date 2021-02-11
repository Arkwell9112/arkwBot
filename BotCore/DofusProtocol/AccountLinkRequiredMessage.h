#ifndef ACCOUNTLINKREQUIREDMESSAGE
#define ACCOUNTLINKREQUIREDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AccountLinkRequiredMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7001;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AccountLinkRequiredMessage(ICustomDataInput &input);
};

#endif