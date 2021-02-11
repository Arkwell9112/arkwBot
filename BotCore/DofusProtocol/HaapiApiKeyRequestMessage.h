#ifndef HAAPIAPIKEYREQUESTMESSAGE
#define HAAPIAPIKEYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HaapiApiKeyRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1518;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiApiKeyRequestMessage(ICustomDataInput &input);
};

#endif