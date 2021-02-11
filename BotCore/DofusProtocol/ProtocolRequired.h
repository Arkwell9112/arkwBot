#ifndef PROTOCOLREQUIRED
#define PROTOCOLREQUIRED

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class ProtocolRequired : public NetworkInterface {
public:
    std::string version;
    unsigned int protocolId = 6660;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ProtocolRequired(ICustomDataInput &input);

    void _versionFunc(ICustomDataInput &input);
};

#endif