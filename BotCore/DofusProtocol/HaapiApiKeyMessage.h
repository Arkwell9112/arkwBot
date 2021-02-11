#ifndef HAAPIAPIKEYMESSAGE
#define HAAPIAPIKEYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class HaapiApiKeyMessage : public NetworkInterface {
public:
    std::string token;
    unsigned int protocolId = 3912;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiApiKeyMessage(ICustomDataInput &input);

    void _tokenFunc(ICustomDataInput &input);
};

#endif