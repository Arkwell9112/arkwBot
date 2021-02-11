#ifndef CREDENTIALSACKNOWLEDGEMENTMESSAGE
#define CREDENTIALSACKNOWLEDGEMENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CredentialsAcknowledgementMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9137;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CredentialsAcknowledgementMessage(ICustomDataInput &input);
};

#endif