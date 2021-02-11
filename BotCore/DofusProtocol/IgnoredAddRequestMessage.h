#ifndef IGNOREDADDREQUESTMESSAGE
#define IGNOREDADDREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class IgnoredAddRequestMessage : public NetworkInterface {
public:
    std::string name;
    bool session = false;
    unsigned int protocolId = 5339;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IgnoredAddRequestMessage(ICustomDataInput &input);

    void _nameFunc(ICustomDataInput &input);

    void _sessionFunc(ICustomDataInput &input);
};

#endif