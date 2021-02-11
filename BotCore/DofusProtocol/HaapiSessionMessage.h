#ifndef HAAPISESSIONMESSAGE
#define HAAPISESSIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class HaapiSessionMessage : public NetworkInterface {
public:
    std::string key;
    unsigned int type = 0;
    unsigned int protocolId = 4527;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiSessionMessage(ICustomDataInput &input);

    void _keyFunc(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif