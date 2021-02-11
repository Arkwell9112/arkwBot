#ifndef HAAPISHOPAPIKEYREQUESTMESSAGE
#define HAAPISHOPAPIKEYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HaapiShopApiKeyRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9043;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiShopApiKeyRequestMessage(ICustomDataInput &input);
};

#endif