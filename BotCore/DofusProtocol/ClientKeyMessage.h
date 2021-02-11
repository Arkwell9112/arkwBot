#ifndef CLIENTKEYMESSAGE
#define CLIENTKEYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class ClientKeyMessage : public NetworkInterface {
public:
    std::string key;
    unsigned int protocolId = 3071;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ClientKeyMessage(ICustomDataInput &input);

    void _keyFunc(ICustomDataInput &input);
};

#endif