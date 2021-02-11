#ifndef HAAPISHOPAPIKEYMESSAGE
#define HAAPISHOPAPIKEYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class HaapiShopApiKeyMessage : public NetworkInterface {
public:
    std::string token;
    unsigned int protocolId = 1567;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiShopApiKeyMessage(ICustomDataInput &input);

    void _tokenFunc(ICustomDataInput &input);
};

#endif