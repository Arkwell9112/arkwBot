#ifndef HELLOCONNECTMESSAGE
#define HELLOCONNECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class HelloConnectMessage : public NetworkInterface {
public:
    std::string salt;
    std::vector<int> key;
    unsigned int protocolId = 7981;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HelloConnectMessage(ICustomDataInput &input);

    void _saltFunc(ICustomDataInput &input);

    void _keyFunc(ICustomDataInput &input);
};

#endif