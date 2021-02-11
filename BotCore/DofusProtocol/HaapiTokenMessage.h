#ifndef HAAPITOKENMESSAGE
#define HAAPITOKENMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class HaapiTokenMessage : public NetworkInterface {
public:
    std::string token;
    unsigned int protocolId = 7685;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiTokenMessage(ICustomDataInput &input);

    void _tokenFunc(ICustomDataInput &input);
};

#endif